#ifndef CONTACT_H
#define CONTACT_H


#include "Address.hpp"
#include "Email.hpp"
#include "Telephone.hpp"



class Contact {

public:

    Contact();
    ~Contact();


private:
    
    Address* address;
    Telephone* telephone;
    Email* email;

};


#endif