/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:37:35 by hipham            #+#    #+#             */
/*   Updated: 2024/12/15 17:58:20 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _Brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(), _Brain(new Brain(*other._Brain))
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	type = other.type;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignment Constructor Called" << std::endl;
	if (this != &other)
	{
		type = other.type;
		_Brain = new Brain(*other._Brain);
	}
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete(_Brain);
}

void Dog::makeSound() const
{
	std::cout << "GOWWWW" << std::endl;
}

void Dog::setBrainIdeas(std::string *ideas, int n)
{
	_Brain->setIdeas(ideas, n);
}

std::string *Dog::getBrainIdeas()
{
	return (_Brain->getIdeas());
}
