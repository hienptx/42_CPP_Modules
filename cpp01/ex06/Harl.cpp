/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:16:14 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 15:23:19 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout   << "[ DEBUG ]" << "\n"
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << "\n"
				<< "I really do!" << "\n"
				<< std::endl;
}
	
void Harl::info(void)
{
	std::cout   << "[ INFO ]" << "\n"
				<< "I cannot believe adding extra bacon costs more money." << "\n"
				<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n"
				<< std::endl;
}

void Harl::warning(void)
{
	std::cout   << "[ WARNING ]" << "\n"
				<< "I think I deserve to have some extra bacon for free." << "\n"
				<< "I’ve been coming for years whereas you started working here since last month." << "\n"
				<< std::endl;
}

void Harl::error(void)
{
	std::cout   << "[ ERROR ]" << "\n"
				<< "This is unacceptable! I want to speak to the manager now." << "\n"
				<< std::endl;
}

void Harl::complain(LogLevel level)
{
	void (Harl::*complainPTR[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	switch (level)
	{
		case DEBUG:
			for(size_t i = 0; i < 4; i++)
				(this->*complainPTR[i])();
			break;
		case INFO:
			for(size_t i = 1; i < 4; i++)
				(this->*complainPTR[i])();
			break;
		case WARNING:
			for(size_t i = 2; i < 4; i++)
				(this->*complainPTR[i])();
			break;
		case ERROR:
			for(size_t i = 3; i < 4; i++)
				(this->*complainPTR[i])();
			break;
		default:
			break;
	}
}