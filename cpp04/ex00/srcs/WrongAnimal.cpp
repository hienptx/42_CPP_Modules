/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:10:16 by hipham            #+#    #+#             */
/*   Updated: 2024/12/13 15:10:17 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrongAnimal") 
{
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) 
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	type = other.type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &other)
{	
	std::cout << "WrongAnimal Assignment Constructor Called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WRONG mallllll" << std::endl;
}
