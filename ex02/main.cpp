/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:38:26 by hipham            #+#    #+#             */
/*   Updated: 2024/11/14 16:38:30 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string; //pointer to string
    std::string &stringREF = string; //reference to string
    
    std::cout << "memory address of the string vairable: " << &string << std::endl
              << "memory address held by stringPTR: "  << stringPTR << std::endl
              << "memory address held by stringREF: "  << &stringREF << std::endl
              << "value of string variable: " << string << std::endl        
              << "value pointed to by stringPTR: " << *stringPTR << std::endl        
              << "value pointed to by stringREF: " << stringREF << std::endl;        
}
