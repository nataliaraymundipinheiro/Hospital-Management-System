/**
 * @file TextColor.cpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Implementation of TextColor namespace functions
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#include "TextColor.hpp"


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

string TextColor::Red(string _text) {
    return "\033[31m" + _text + "\033[0m";
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

string TextColor::Green(string _text) {
    return "\033[32m" + _text + "\033[0m";
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

string TextColor::Yellow(string _text) {
    return "\033[33m" + _text + "\033[0m";
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

string TextColor::Orange(string _text) {
    return "\033[34m" + _text + "\033[0m";
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

string TextColor::Purple(string _text) {
    return "\033[35m" + _text + "\033[0m";
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

string TextColor::Blue(string _text) {
    return "\033[36m" + _text + "\033[0m";
}
