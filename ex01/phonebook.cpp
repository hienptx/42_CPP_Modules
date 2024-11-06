/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:36:17 by hipham            #+#    #+#             */
/*   Updated: 2024/11/05 15:06:11 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string>

std::string	get_darkest_secret(void)
{
    std::string darkest_secret;
    std::cout << "darkest_secret: ";
    std::getline(std::cin, darkest_secret);
    return (darkest_secret);
}

std::string	get_phone_number(void)
{
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
    return (phone_number);
}

std::string	get_nick_name(void)
{
	std::string nick_name;
	std::cout << "nick_name: ";
	std::getline(std::cin, nick_name);
    return (nick_name);
}

std::string	get_last_name(void)
{
    std::string last_name;
    std::cout << "last_name: ";
    std::getline(std::cin, last_name);
    return (last_name);
}

std::string	get_first_name(void)
{
    std::string first_name;
    std::cout << "first_name: ";
    std::getline(std::cin, first_name);
    return (first_name);
}

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
        Contact person[8];

    public:
        void setContact(size_t idx)
        {
            person[idx].first_name = get_first_name();
			person[idx].last_name = get_last_name();
			person[idx].nick_name = get_nick_name();
			person[idx].phone_number = get_phone_number();
			person[idx].darkest_secret = get_darkest_secret();
        }
        Contact *getContact()
        {
            return (person);
        }
};

void print_contact(Contact *person, int idx)
{
    std::cout << "first_name: " << person[idx].first_name << std::endl;
    std::cout << "last_name: " << person[idx].last_name << std::endl;
    std::cout << "nick_name: " << person[idx].nick_name << std::endl;
    std::cout << "phone_number: " << person[idx].phone_number << std::endl;
    std::cout << "darkest_secret: " << person[idx].darkest_secret << std::endl;
}

void search(Contact *person, size_t idx)
{
    size_t i = 1;
    std::string input;
    int valid;

    while (i <= idx)
    {
        std::cout << i << " | ";
        std::cout << person[i].first_name << " | ";
        std::cout << person[i].last_name << " | ";
        std::cout << person[i].nick_name << std::endl;
        i++;
    }
    std::cout << "Please enter valid index to search" << std::endl;
    std::getline(std::cin, input);
    valid = std::stoi(input);
    if (0 < valid  && valid <= (int)idx)
    print_contact(person, valid);
}

int	main(void)
{
    PhoneBook pb;
    size_t index = 0;

	while (1)
	{
		std::string input;
		std::cout << "Enter your valid actions: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
            index++;
            pb.setContact(index);
			continue ;
		}
		else if (input.compare("SEARCH") == 0)
		{
            search(pb.getContact(), index);
        }
		else if (input.compare("EXIT") == 0)
		{
			break ;
		}
		else
			continue ;
	}
	return (0);
}