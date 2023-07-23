/**
 * @file Utils.cpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Implementation of Utils namespace functions
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#include "Utils.hpp"


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

void Utils::Uppercase(string& _word) {
    
    for (int i = 0; i < _word.length(); i++) {
        _word[i] = toupper(_word[i]);
    }

}
    
