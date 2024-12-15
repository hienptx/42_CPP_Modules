/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:20:00 by hipham            #+#    #+#             */
/*   Updated: 2024/12/13 15:11:30 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	type = other.type;
}

Cat &Cat::operator=(Cat &other)
{
	std::cout << "Cat Assignment Constructor Called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MEOWWWW" << std::endl;
}
