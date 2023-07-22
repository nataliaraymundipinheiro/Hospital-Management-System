#include <iostream>


#include "Sex.hpp"


void Uppercase(string& _sex) {
    for (int i = 0; i < _sex.length(); i++) { _sex[i] = toupper(_sex[i]); }
}


Sex::Sex()
{}

Sex::Sex(string _sex) {
    Uppercase(_sex);

    try {
        if (_sex == "MALE" || _sex == "FEMALE") { sex = _sex; }
        else { throw _sex; }
    } catch (string _catch) {
        cout << "Invalid sex:" << _catch << endl;
    }
       
}

string Sex::SetSex(string _sex) {
    try {
        if (_sex == "MALE" || _sex == "FEMALE") { sex = _sex; }
        else { throw _sex; }
    } catch (string _catch) {
        cout << "Invalid sex:" << _catch << endl;
    }
}