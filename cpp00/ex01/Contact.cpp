/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:15:44 by hipham            #+#    #+#             */
/*   Updated: 2024/11/26 19:30:10 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::getFirstName() {
    return (first_name);
};

std::string Contact::getLastName() {
    return (last_name);
}

std::string Contact::getNickName() {
    return (nick_name);
}

std::string Contact::getPhoneNumber() {
    return (phone_number);
}

std::string Contact::getDarkestSecret() {
    return (darkest_secret);
};

bool is_empty_string(std::string str) {

    if(str.empty())
        return (true);
    for(char c : str)
    {
        if(!isspace(c))
            return (false);
    }
    return (true);
}

std::string	get_darkest_secret(void) {

    std::string darkest_secret;
    std::cout << "darkest_secret: ";
    std::getline(std::cin, darkest_secret);
    if (is_empty_string(darkest_secret))
        darkest_secret = get_darkest_secret();
    return (darkest_secret);
}

std::string	get_phone_number(void) {

    int	valid;

    std::string phone_number;
    valid = 0;
    while (!valid)
    {
        std::cout << "phone_number: ";
        std::getline(std::cin, phone_number);
        valid = 1;
        for (int i = 0; phone_number[i] != '\0'; i++)
        {
            if (!isdigit(phone_number[i]))
            {
                phone_number.clear();
                valid = 0;
            }
        }
    }
    if (is_empty_string(phone_number))
        phone_number = get_phone_number();
    return (phone_number);
}

std::string	get_nick_name(void) {

	std::string nick_name;
	std::cout << "nick_name: ";
	std::getline(std::cin, nick_name);
    if (is_empty_string(nick_name))
        nick_name = get_nick_name();
    return (nick_name);
}

std::string	get_last_name(void) {

    std::string last_name;
    std::cout << "last_name: ";
    std::getline(std::cin, last_name);
    if (is_empty_string(last_name))
        last_name = get_last_name();
    return (last_name);
}

std::string	get_first_name(void) {

    std::string first_name;
    std::cout << "first_name: ";
    std::getline(std::cin, first_name);
    if (is_empty_string(first_name))
        first_name = get_first_name();
    return (first_name);
}

void Contact::setInfo() {
    first_name = get_first_name();
    last_name = get_last_name();
    nick_name = get_nick_name();
    phone_number = get_phone_number();
    darkest_secret = get_darkest_secret();

}
