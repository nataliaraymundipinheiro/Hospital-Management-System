#ifndef PATIENT_H
#define PATIENT_H


#include "Person.hpp"


class Patient : protected Person {

public:

    Patient(/* args */);
    ~Patient();


private:
    
    // Person* patient;

    Date* admission;
    Date* discharge;
};

#endif