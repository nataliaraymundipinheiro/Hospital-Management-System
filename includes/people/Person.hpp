#ifndef PERSON_H
#define PERSON_H


#include <string>

#include "Address.hpp"
#include "Contact.hpp"
#include "Date.hpp"
#include "Identification.hpp"
#include "Insurance.hpp"
#include "MedicalHistory.hpp"
#include "Role.hpp"
#include "Sex.hpp"

using namespace std;


class Person {

public:

    Person(/* args */);
    ~Person();


protected:

    string          firstName;
    string          lastName;
    Identification* id;

    Date* birthday;
    int   age;
    Sex*  sex;
    
    Contact* contact;
    Contact* emergencyContact;

    MedicalHistory* history;
    Insurance*      insurance;

    bool organDonor;

    Role* role;

};

#endif