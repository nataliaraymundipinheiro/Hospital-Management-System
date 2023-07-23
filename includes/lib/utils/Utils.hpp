/**
 * @file Utils.hpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Declaration of Utils namespace
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#ifndef UTILS_HPP
#define UTILS_CPP


#include <iostream>
#include <string>


using std::cout;
using std::endl;
using std::string;


/**
 * @brief Miscellaneous functions.
 * 
 */
namespace Utils {
    
    /**
     * @brief Turns string to uppercase letters. Modifies string in place.
     * 
     * @param _word String to turn to uppercase
     */
    void Uppercase(string& _word);

};

#endif
