/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:41:24 by hipham            #+#    #+#             */
/*   Updated: 2024/11/27 16:57:47 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) //constructor 
{
	std::cout << "Zombie constructed" << std::endl;
	name = n;
}

Zombie::~Zombie() //destructor
{
	std::cout << name <<  " Zombie destructed \n" << std::endl;
}

void Zombie::announce(void) //member function
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
