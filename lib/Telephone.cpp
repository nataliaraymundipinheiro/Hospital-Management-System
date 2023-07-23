/**
 * @file Telephone.cpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Implementation of Telephone class functions
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#include "Telephone.hpp"

#include "TextColor.hpp"


#include <iostream>


using std::cout;
using std::endl;

using TextColor::Red;
using TextColor::Yellow;


// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Telephone::Telephone() { }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Telephone::Telephone(string _phoneNumber) {

    // Check if length is incorrect
    if (_phoneNumber.length() != 7) {
        cout << Red("Number contains more than 7 characters. ");
        cout << Red("Please, enter a number of the form XXXXXXX.") << endl;
        return;
    }

    // Check if all characters are digits
    for (char c : _phoneNumber) {
        if (!isdigit(c)) {
            cout << Red("Number contains non-numeric characters. ");
            cout << Red("Please, enter only numeric characters.") << endl;
            return;
        }
    }

    // If all errors are passed, update number
    phoneNumber = _phoneNumber;
    
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Telephone::Telephone(string _countryCode, string _phoneNumber) {

    // Check if length is correct
    if (_countryCode.length() < 1 && 3 < _countryCode.length()) {
        cout << Red("Country code is invalid.") << endl;
        return;
    }

    // Check if all characters are digits
    for (char c : _countryCode) {
        if (!isdigit(c)) {
            cout << Red("Country code is invalid.") << endl;
            return;
        }
    }

    // If all errors are passed, update country code
    countryCode = _countryCode;

    
    // Check if length is incorrect
    if (_phoneNumber.length() != 7) {
        cout << Red("Number contains more than 7 characters. ");
        cout << Red("Please, enter a number of the form XXXXXXX.") << endl;
        return;
    }

    // Check if all characters are digits
    for (char c : _phoneNumber) {
        if (!isdigit(c)) {
            cout << Red("Number contains non-numeric characters. ");
            cout << Red("Please, enter only numeric characters.") << endl;
            return;
        }
    }

    // If all errors are passed, update number
    phoneNumber = _phoneNumber;

}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

Telephone::~Telephone() { }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

void Telephone::SetCountryCode(string _countryCode) {

    // Check if length is correct
    if (_countryCode.length() < 1 && 3 < _countryCode.length()) {
        cout << Red("Country code is invalid.") << endl;
        return;
    }

    // Check if all characters are digits
    for (char c : _countryCode) {
        if (!isdigit(c)) {
            cout << Red("Country code is invalid.") << endl;
            return;
        }
    }

    // If all errors are passed, update country code
    countryCode = _countryCode;
    
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

void Telephone::SetPhoneNumber(string _phoneNumber) {

    // Check if length is incorrect
    if (_phoneNumber.length() != 7) {
        cout << Red("Number contains more than 7 characters. ");
        cout << Red("Please, enter a number of the form XXXXXXX.") << endl;
        return;
    }

    // Check if all characters are digits
    for (char c : _phoneNumber) {
        if (!isdigit(c)) {
            cout << Red("Number contains non-numeric characters. ");
            cout << Red("Please, enter only numeric characters.") << endl;
            return;
        }
    }

    // If all errors are passed, update number
    phoneNumber = _phoneNumber;
    
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

void Telephone::SetExtension(string _extension) {

    // Check if phone number exists
    if (phoneNumber.length() == 0) {
        cout << Red("Phone number is empty: must add it first.") << endl;
        return;
    }

    // Check if all characters are digits
    for (char c : _extension) {
        if (!isdigit(c)) {
            cout << Red("Extension is invalid.") << endl;
            return;
        }
    }

    // If all errors are passed, update country code
    extension = _extension;
    
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

string Telephone::DisplayTelephone() const {

    if (phoneNumber.length() == 0) {
        return Yellow("Phone number has not been added.");
    }
    
    string telephone;
    
    if (countryCode.length() != 0) {
        telephone += '+' + countryCode + ' ';
    }

    string areaCode(phoneNumber.begin(), phoneNumber.begin()+3);
    string lineNumber(phoneNumber.begin()+3, phoneNumber.end());

    telephone += areaCode + '-';
    telephone += lineNumber;

    if (extension.length() != 0) {
        telephone += ", ext. " + extension;
    }

    return telephone;
}
