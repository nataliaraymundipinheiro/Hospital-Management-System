/**
 * @file Roles.hpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Declaration of Roles namespace
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#ifndef ROLES_H
#define ROLES_H


#include <string>
#include <map>
#include <vector>


using std::string;
using std::map;
using std::vector;


namespace Roles {

    extern vector<string> staff = {
        "NURSING",
        "PHARMACY",
        "PHYSICIAN",
        "TECHNITIAN",
        "THERAPIST"
    };

    extern vector<string> patients = {
        "PATIENT"
    };

    extern map<string, vector<string> > roles = {
        {"STAFF", staff},
        {"PATIENT", patients},
    };

};

#endif