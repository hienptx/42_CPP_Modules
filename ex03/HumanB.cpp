/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:32 by hipham            #+#    #+#             */
/*   Updated: 2024/11/14 16:42:34 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): _Bname(name), _Bweapon(nullptr)
{
    std::cout << "HumanB constructed" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _Bweapon = &weapon;
}

void HumanB::attack()
{
    if (_Bweapon)
    {
        std::cout   << _Bname << " attacks with their "  
                    << _Bweapon->getType() << std::endl;
    }
    else
        std::cout << _Bname << "does not hold any weapon" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB deconstructed" << std::endl;
}