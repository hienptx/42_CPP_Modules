#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

class Contact 
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
};

class PhoneBook
{
    private:
        Contact person[9];

    public:
        void setContact(size_t idx);
        Contact *getContact();
};

#endif