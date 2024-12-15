/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:58:47 by hipham            #+#    #+#             */
/*   Updated: 2024/12/13 14:58:45 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal") 
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal &other) 
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	type = other.type;
}

Animal &Animal::operator=(Animal &other)
{	
	std::cout << "Animal Assignment Constructor Called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType() const
{
	return(type);
}

void Animal::makeSound() const
{
	std::cout << "mallllll" << std::endl;
}
