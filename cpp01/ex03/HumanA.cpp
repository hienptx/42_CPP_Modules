/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:25 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 13:55:42 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):_Aname(name), _Aweapon(weapon)
{
	std::cout << "HumanA constructed" << std::endl;
}

void HumanA::attack()
{
	std::cout   << _Aname << " attacks with their "
				<< _Aweapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructed" << std::endl;
}