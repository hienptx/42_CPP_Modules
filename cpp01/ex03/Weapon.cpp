/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:45 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 13:54:54 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Weapon constructed" << std::endl;
}

void Weapon::setType(std::string newType)
{
	_type = newType;
}

const std::string& Weapon::getType()
{
	return (_type);
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructed\n" << std::endl; 
}