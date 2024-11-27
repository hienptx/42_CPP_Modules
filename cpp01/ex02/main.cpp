/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:38:26 by hipham            #+#    #+#             */
/*   Updated: 2024/11/27 17:16:22 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void test (std::string &strREF)
{
	strREF = "Hi This Is Test";
	std::cout << strREF << std::endl;
}

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string; //pointer to string
	std::string &stringREF = string; //reference to string
	
	std::cout << "memory address of the string vairable: " << &string << "\n"
			  << "memory address held by stringPTR: "  << stringPTR << "\n"
			  << "memory address held by stringREF: "  << &stringREF << "\n"
			  << "value of string variable: " << string << "\n"
			  << "value pointed to by stringPTR: " << *stringPTR << "\n"
			  << "value referenced by stringREF: " << stringREF << std::endl;
	test(string);
}
