/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:19:55 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 14:20:17 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char *ag[])
{
	if (ac == 4)
		input_handling(ag);
	else
	{
		std::cout   << "Invalid command"
					<< "./sed filename \"string_1\" \"string_2\""
					<< std::endl;
	}
	return (0);
}
