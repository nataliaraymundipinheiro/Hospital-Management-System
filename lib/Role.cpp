#include "Role.hpp"
#include "Roles.hpp"

#include "TextColor.hpp"
#include "Utils.hpp"


#include <iostream>


using std::cout;
using std::endl;
using std::count;

using TextColor::Red;
using TextColor::Yellow;
using TextColor::Green;

using Utils::Uppercase;

using Roles::patients;
using Roles::staff;
using Roles::roles;


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Role::Role() { }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Role::Role(string _field) {
    
    SetField(_field);

}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Role::Role(string _role, string _field) {
    
    SetRole(_role);
    SetField(_field);

}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Role::~Role() { }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

void Role::SetRole(string _role) {

    Uppercase(_role);

    if (roles.find(_role) == roles.end()) {
        cout << Red("Role not found: " + _role) << endl;
        return;
    }
    
    role = _role;
    cout << Green("Role updated to " + role + ".") << endl;
    return;

}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

void Role::SetField(string _field) {

    Uppercase(_field);

    // If role is defined, make sure _field is inside role
    if (role.length() != 0) {
        
        // If found role but can't find field
        if (!count(roles[role].begin(), roles[role].end(), _field)) {
            cout << Red("Field not found in " + role + ": " + _field) << endl;
            return;
        }

        field = _field;
        cout << Green("Field updated to " + role + "->" + field + ".") << endl;
        return;

    }
    
    // Look in every role to find field
    for (auto it = roles.begin(); it != roles.end(); it++) {
        
        // If field isn't found in this role
        if (!count(it->second.begin(), it->second.end(), _field)) {
            cout << Red("Field not found in " + it->first + ": " + _field)
                                                                        << endl;
        } else {
            role = it->first;
            field = _field;
            cout << Green("Role and field updated to " + role + "->" + field +
                                                                   ".") << endl;
            return;
        }
        
    }

    // If role or field wasn't found still
    if (role.length() == 0) {
        cout << Red("Couldn't find field: " + _field) << endl;
        return;
    }
}

