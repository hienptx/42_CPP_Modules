/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:41:24 by hipham            #+#    #+#             */
/*   Updated: 2024/11/12 18:59:48 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) //constructor
{
    name = n;
    std::cout << name << " constructed" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " deconstructed" << std::endl;
}

void Zombie::announce(void) //member function
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
