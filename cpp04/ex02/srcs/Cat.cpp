/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:20:00 by hipham            #+#    #+#             */
/*   Updated: 2024/12/15 18:12:33 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	_Brain = new Brain();
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(), _Brain(new Brain(*other._Brain))
{
	type = other.type;
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(Cat &other)
{
	if (this != &other)
	{
		type = other.type;
		delete _Brain;
		_Brain = new Brain(*other._Brain);
	}
	std::cout << "Cat Assignment Called" << std::endl;
	return(*this);
}

Cat::~Cat()
{
	delete _Brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MEOWWWW" << std::endl;
}

void Cat::setBrainIdeas(std::string *ideas, int n)
{
	_Brain->setIdeas(ideas, n);
}

std::string *Cat::getBrainIdeas()
{
	return (_Brain->getIdeas());
}