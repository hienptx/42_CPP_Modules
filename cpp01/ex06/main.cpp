/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:16:44 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 15:23:41 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

LogLevel mapArg(const std::string& levelStr)
{
	if (levelStr == "DEBUG")
		return(DEBUG);
	else if (levelStr == "INFO")
		return(INFO);
	else if (levelStr == "WARNING")
		return(WARNING);
	else if (levelStr == "ERROR")
		return(ERROR);
	else
		return(INVALID);
}

int main(int ac, char *ag[])
{
	LogLevel    level;
	std::string levelStr;

	if (ac == 2)
	{
		levelStr = ag[1];
		level = mapArg(levelStr);
		if (level == INVALID)
		{
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return 0;
		}
		Harl me;
		me.complain(level);
	}
	else
	{
		std::cout  << "Invalid input" << "\n"
				   << "./harlFilter \"Complaint\" " << std::endl;
	}
}