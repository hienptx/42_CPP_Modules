/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:11:19 by hipham            #+#    #+#             */
/*   Updated: 2024/12/13 15:13:49 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	type = other.type;
}

WrongCat &WrongCat::operator=(WrongCat &other)
{
	std::cout << "WrongCat Assignment Constructor Called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WRONG MEOWWWW" << std::endl;
}
