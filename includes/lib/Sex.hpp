#ifndef SEX_H
#define SEX_H


#include <string>

using namespace std;


class Sex {

public:

    Sex();
    Sex(string _sex);
    
    ~Sex();


    inline string GetSex() const { return sex; }


    string SetSex(string _sex);


    friend void Uppercase(string& _sex);
    
    
private:
    string sex = "N/A";
    

};


#endif