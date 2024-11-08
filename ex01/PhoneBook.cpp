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

#include "PhoneBook.hpp"

void print_contact(Contact *person, int idx)
{
    std::cout << "first_name: " << person[idx].first_name << std::endl;
    std::cout << "last_name: " << person[idx].last_name << std::endl;
    std::cout << "nick_name: " << person[idx].nick_name << std::endl;
    std::cout << "phone_number: " << person[idx].phone_number << std::endl;
    std::cout << "darkest_secret: " << person[idx].darkest_secret << std::endl;
}

void format_output(std::string str)
{
    if (str.length() > 10)
    {
        std::cout.width(9); std::cout << std::right << str.substr(0, 8) << ".";
    }
    else
    {
        std::cout.width(10); std::cout << std::right << str.substr(0, 9);
    }
}

void print_search(Contact *person, size_t idx)
{
    size_t i = 0;
    std::string input;
    int valid;

    while (i < idx && i < 8)
    {
        std::cout.width(10); std::cout << std::right << i + 1 << "|";
        format_output(person[i].first_name); std::cout << "|";
        format_output(person[i].last_name); std::cout << "|";
        format_output(person[i].nick_name); std::cout << std::endl;
        i++;
    }
    std::cout << "Please enter valid index to search" << std::endl;
    std::getline(std::cin, input);
    valid = std::stoi(input);
    if (0 < valid  && valid <= (int)idx)
        print_contact(person, valid - 1);
}

int	main(void)
{
    PhoneBook phonebook;
    size_t index = 0;

	while (1)
	{
		std::string input;
		std::cout << "Enter your valid actions: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
            if (index > 8)
            {
                std::cout << "List is full! SEARCH or EXIT" << std::endl;
                continue ;
            }
            phonebook.setContact(index);
            index++;
			continue ;
		}
		else if (input.compare("SEARCH") == 0)
            print_search(phonebook.getContact(), index);
		else if (input.compare("EXIT") == 0)
			break ;
		else
			continue ;
	}
	return (0);
}