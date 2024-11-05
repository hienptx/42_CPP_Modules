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

namespace darkest_secret
{
    void	get_info(void)
    {
        std::string darkest_secret;
        std::cout << "darkest_secret: ";
        std::cin >> darkest_secret;
    }
}

namespace phone_number
{
    void	get_info(void)
    {
        int	valid;

        std::string phone_number;
        valid = 0;
        while (!valid)
        {
            std::cout << "phone_number: ";
            std::cin >> phone_number;
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
    }
}

namespace nick_name
{
void	get_info(void)
{
	std::string nick_name;
	std::cout << "nick_name: ";
	std::cin >> nick_name;
}
}

namespace last_name
{
    void	get_info(void)
    {
        std::string last_name;
        std::cout << "last_name: ";
        std::cin >> last_name;
    }
}

namespace first_name
{
    void	get_info(void)
    {
        std::string first_name;
        std::cout << "first_name: ";
        std::cin >> first_name;
    }
}

int	main(void)
{
	while (1)
	{
		std::string input;
		std::cout << "Enter your valid actions: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			first_name::get_info();
			last_name::get_info();
			nick_name::get_info();
			phone_number::get_info();
			darkest_secret::get_info();
			continue ;
		}
		else if (input.compare("SEARCH") == 0)
		{
			;
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