/**
 * @file Telephone.hpp
 * @author Natalia Raymundi Pinheiro (nraymundipinheiro@hotmail.com)
 * @brief Declaration of Telephone class
 * @version 0.1
 * @date 2023-07-22
 * 
 */

#ifndef TELEPHONE_H
#define TELEPHONE_H


#include <string>


using std::string;


/**
 * @brief A Telephone object represents a phone number with possibility for 
 *        country code and phone extension.
 */
class Telephone {

public:

    /**
     * @brief Construct an empty Telephone object.
     * 
     * @see Telephone(string _phoneNumber)
     * @see Telephone(string _countryCode, string _phoneNumber)
     */
    Telephone();
    
    /**
     * @brief Construct a new Telephone object with only a phone number.
     * 
     * @param _phoneNumber Phone number
     * 
     * @see Telephone()
     * @see Telephone(string _countryCode, string _phoneNumber)
     * @see Telephone(string _phoneNumber, string _extension)
     */
    Telephone(string _phoneNumber);

    /**
     * @brief Construct a new Telephone object with only phone number and
     *        country code.
     * 
     * @param _countryCode Country code of format 000
     * @param _phoneNumber Phone number of format 0000000
     * 
     * @see Telephone()
     * @see Telephone(string _phoneNumber)
     * @see Telephone(string _phoneNumber, string _extension)
     */
    Telephone(string _countryCode, string _phoneNumber);

    /**
     * @brief Destroy the Telephone object.
     */
    ~Telephone();


    /**
     * @brief Get the countryCode object.
     * 
     * @return string Country code
     */
    inline string GetCountryCode() const { return countryCode; }

    /**
     * @brief Get the phoneNumber object.
     * 
     * @return string Phone number
     */
    inline string GetPhoneNumber() const { return phoneNumber; }

    /**
     * @brief Get the extension object.
     * 
     * @return string Extension
     */
    inline string GetExtension()   const { return extension; }


    /**
     * @brief Set the countryCode object.
     * 
     * @param _countryCode Country code of format 000
     */
    void SetCountryCode(string _countryCode);

    /**
     * @brief Set the phoneNumber object.
     * 
     * @param _phoneNumber Phone number of format 0000000
     */
    void SetPhoneNumber(string _phoneNumber);

    /**
     * @brief Set the extension object. This object must be set manually after
     *        object creation.
     * 
     * @param _extension Extension of numeric format
     */
    void SetExtension(string _extension);


    /**
     * @brief Display the telephone in the following formats:
     *        
     *        * All components are present:       +000 000-0000, ext. 000
     *        * Only phoneNumber and countryCode: +000 000-0000
     *        * Only phoneNumber:                 000-0000
     *        * No components present:          Phone number has not been added.
     * 
     * @return string One of the formats described above
     */
    string DisplayTelephone() const;


private:
    
    /**
     * Country code of telephone. Can be an empty string. If there is a country
     * code, there must be a phone number.
     */
    string countryCode;

    /**
     * Phone number of telephone. Can be an empty string. The phone number can
     * be the only non-empty member.
     */
    string phoneNumber;

    /**
     * Extension of telephone. Can be an empty string. If there is an extension,
     * there must be a phone number. Must be set through setter function.
     */
    string extension;

};

#endif