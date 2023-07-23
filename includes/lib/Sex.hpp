/**
 * @file Sex.hpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Declaration of Sex class
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#ifndef SEX_H
#define SEX_H


#include <string>


using std::string;


/**
 * @brief A Sex object represents the person's sex (biological). Not to be
 *        confused with gender.
 */
class Sex {

public:

    /**
     * @brief Construct an empty Sex object.
     * 
     * @see Sex(string _sex)
     */
    Sex();

    /**
     * @brief Construct a new Sex object with the passed sex.
     * 
     * @param _sex Sex of person ("N/A", "MALE", or "FEMALE")
     * 
     * @see Sex()
     */
    Sex(string _sex);
    

    /**
     * @brief Destroy the Sex object.
     */
    ~Sex();


    /**
     * @brief Get the sex object.
     * 
     * @return string Sex
     */
    inline string GetSex() const { return sex; }


    /**
     * @brief Set the sex object.
     * 
     * @param _sex Sex of person
     */
    void SetSex(string _sex);
    
    
private:

    /**
     * Sex of person. Not to be confused with gender. Can be either N/A (not 
     * available), MALE, or FEMALE.
     */
    string sex = "N/A";
    
};

#endif