/**
 * @file Sex.cpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Implementation of Sex class functions
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#include "Sex.hpp"

#include "TextColor.hpp"
#include "Utils.hpp"


#include <iostream>


using std::cout;
using std::endl;

using TextColor::Red;
using Utils::Uppercase;


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Sex::Sex() { }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Sex::Sex(string _sex) {
    
    // Make all uppercase for consistency
    Uppercase(_sex);

    // Must be one of the three:
    if (_sex != "MALE" && _sex != "FEMALE" && _sex != "N/A") {
        cout << Red("Invalid sex. Must be either 'MALE' or 'FEMALE'. ");
        cout << Red("If you would prefer to not disclose, enter 'N/A'.") << endl;
        return;
    }
    
    // After passing all errors, it's safe to update sex
    sex = _sex;

}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

void Sex::SetSex(string _sex) {
    
    // Make all uppercase for consistency
    Uppercase(_sex);

    // Must be one of the three:
    if (_sex != "MALE" && _sex != "FEMALE" && _sex != "N/A") {
        cout << Red("Invalid sex. Must be either 'MALE' or 'FEMALE'. ");
        cout << Red("If you would prefer to not disclose, enter 'N/A'.") << endl;
        return;
    }
    
    // After passing all errors, it's safe to update sex
    sex = _sex;

}