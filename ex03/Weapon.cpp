/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:45 by hipham            #+#    #+#             */
/*   Updated: 2024/11/14 16:42:47 by hipham           ###   ########.fr       */
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

std::string Weapon::getType()
{
    const std::string &typeREF = _type;
    return(typeREF);
}

Weapon::~Weapon()
{
    std::cout << "Weapon deconstructed" << std::endl; 
}