/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:33:28 by hipham            #+#    #+#             */
/*   Updated: 2024/12/10 13:50:33 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Defautl Constructor
ScavTrap::ScavTrap() {
	std::cout << "ScavTrap constructor called" << std::endl;
}
// Parameterized Constructor
ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}
// Destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_HitPoints > 0 && _EnergyPoints > 0) {
		std::cout << _Name << " attacks " << target;
		_EnergyPoints--;
	}
	else std::cout << _Name << " have too less EnergyPoints or HitPoints to attack" << std::endl;
}

// This member function will display a message informing that ScavTrap is now in Gate keeper mode.
void ScavTrap::guardGate() {
	std::cout << _Name << " is now in Gate keeper mode" << std::endl;
}
