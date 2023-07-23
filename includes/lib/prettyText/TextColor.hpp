/**
 * @file TextColor.hpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Declaration of TextColor namespace
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#ifndef TEXT_COLOR_H
#define TEXT_COLOR_H


#include <string>


using std::string;


/**
 * @brief The TextColor namespace provides functions to change output text
 *        color.
 */
namespace TextColor {

    /**
     * @brief Turns text to red.
     * 
     * @param _text Text to turn red
     * @return string Red text
     */
    string Red(string _text);

    /**
     * @brief Turns text to green.
     * 
     * @param _text Text to turn green
     * @return string Red text
     */
    string Green(string _text);

    /**
     * @brief Turns text to yellow.
     * 
     * @param _text Text to turn yellow
     * @return string Red text
     */
    string Yellow(string _text);

    /**
     * @brief Turns text to organge.
     * 
     * @param _text Text to turn organge
     * @return string Red text
     */
    string Orange(string _text);

    /**
     * @brief Turns text to purple.
     * 
     * @param _text Text to turn purple
     * @return string Red text
     */
    string Purple(string _text);

    /**
     * @brief Turns text to blue.
     * 
     * @param _text Text to turn blue
     * @return string Red text
     */
    string Blue(string _text);


};

#endif