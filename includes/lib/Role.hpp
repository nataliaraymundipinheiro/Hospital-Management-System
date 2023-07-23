/**
 * @file Role.hpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Declaration of Role class
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#ifndef ROLE_H
#define ROLE_H


#include <string>


using std::string;


class Role {

public:

    Role();
    Role(string _field);
    Role(string _role, string _field);

    
    ~Role();


    inline string GetRole()  const { return role; }
    inline string GetField() const { return field; }


    void SetRole(string _role);
    void SetField(string _field);


private:

    string role;
    string field;

};

#endif