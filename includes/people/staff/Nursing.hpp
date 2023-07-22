#ifndef NURSE_H
#define NURSE_H


#include <string>
#include <vector>

#include "../schedule/Schedule.h"
#include "../licensure/NursingLicensure.h"

using namespace std;


class Nurse {

    public:
        Nurse();
        ~Nurse();


    
    protected:

    private:
        string firstName;
        string lastName;

        NursingLicensure* licensure;
        vector<string> specialty;
        vector<string> qualifications;

        Schedule* shift;



};

#endif