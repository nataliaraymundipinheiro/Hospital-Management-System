#ifndef THERAPIST_H
#define THERAPIST_H


#include <string>
#include <vector>

#include "../schedule/Schedule.h"

using namespace std;


class Therapist {

    public:
        Therapist();
        ~Therapist();


    protected:


    private:
        string firstName;
        string lastName;

        string licensure;
        vector<string> qualifications;

        Schedule* shift;

};

#endif