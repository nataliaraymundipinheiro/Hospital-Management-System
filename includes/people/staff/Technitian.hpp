#ifndef TECHNITIAN_H
#define TECHNITIAN_H


#include <string>
#include <vector>

#include "../schedule/Schedule.h"


using namespace std;


class Technitian {

    public:
        Technitian();
        ~Technitian();

    
    protected:

    private:
        string firstName;
        string lastName;

        string licensure;
        vector<string> qualifications;

        Schedule* shift;

};

#endif