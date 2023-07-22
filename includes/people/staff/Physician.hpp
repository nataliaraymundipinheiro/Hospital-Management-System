#ifndef PHYSICIAN_H
#define PHYSICIAN_H


#include <string>
#include <vector>

#include "../schedule/Schedule.h"

using namespace std;


class Physician {

    public:
        Physician();
        ~Physician();


    
    protected:

    private:
        string firstName;
        string lastName;

        string license;
        vector<string> specialty;
        vector<string> qualifications;
        
        bool onCall;

        Schedule* shift;

};

#endif