/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:00:40 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 15:11:44 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl constructed" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl deconstructed" << std::endl;
}

void Harl::debug(void)
{
	std::cout	<< "[DEBUG]\n"
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				<< "I really do!" 
				<< std::endl;
}
	
void Harl::info(void)
{
	std::cout	<< "[INFO]\n"
				<< "I cannot believe adding extra bacon costs more money."
				<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void Harl::warning(void)
{
	std::cout	<< "[WARNING]\n"
				<< "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming for years whereas you started working here since last month."
				<< std::endl;
}

void Harl::error(void)
{
	std::cout	<< "[ERROR]\n"
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

// pointer to member function
void Harl::complain(std::string level)
{
	void (Harl::*complainPTR[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string level_arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (level_arr[i].compare(level) == 0)
		{
			(this->*complainPTR[i])();
			return ;
		}
	}
	std::cout << "Unknown complaint level" << std::endl;
}

// Declaration:		ReturnType (ClassName::*PointerName)(ParameterTypes);
// Assignment:		PointerName = &ClassName::MemberFunctionName;
// Invocation:		(object.*PointerName)(arguments); // For objects
				// (ptr->*PointerName)(arguments);  // For pointers