/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:37:35 by hipham            #+#    #+#             */
/*   Updated: 2024/12/15 17:13:23 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	type = other.type;
}

Dog &Dog::operator=(Dog &other)
{
	std::cout << "Dog Assignment Constructor Called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "GOWWWW" << std::endl;
}
