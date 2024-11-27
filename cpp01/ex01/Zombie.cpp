/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:38:44 by hipham            #+#    #+#             */
/*   Updated: 2024/11/27 16:55:57 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() //constructor
{
	std::cout << "Zombie constructed" << std::endl;
}

Zombie::~Zombie() //destructor
{
	std::cout << "Zombie deconstructed" << std::endl;
}

void Zombie::announce(void) //member function
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string n)
{
	name = n;
}