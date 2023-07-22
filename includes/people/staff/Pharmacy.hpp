#ifndef PHARMACY_H
#define PHARMACY_H


#include <string>
#include <vector>

#include "../schedule/Schedule.h"

using namespace std;


class Pharmacy {

    public:
        Pharmacy();
        ~Pharmacy();
    
    protected:

    private:
        string firstName;
        string lastName;

        string licensure;
        vector<string> qualifications;

        Schedule* shift;

};

#endif