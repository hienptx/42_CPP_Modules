/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:49:23 by hipham            #+#    #+#             */
/*   Updated: 2024/12/12 15:31:39 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("diamondTrap_clap_name"), ScavTrap(), FragTrap(), _Name("diamondTrap") {
	ScavTrap tmp;

	std::cout << "DiamondTrap constructor called" << std::endl;
	_EnergyPoints = tmp.getEnergyPoints();
	_HitPoints = FragTrap::_HitPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _Name(name) {
	ScavTrap tmp;
	std::cout << "DiamondTrap constructor called" << std::endl;
	_EnergyPoints = tmp.getEnergyPoints();
	_HitPoints = FragTrap::_HitPoints;
	_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) 
	: ClapTrap(other), ScavTrap(other), FragTrap(other) {  // Explicitly call base class copy constructors
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
	_Name = other._Name;
	_HitPoints = other._HitPoints;
	_EnergyPoints = other._EnergyPoints;
	_AttackDamage = other._AttackDamage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other) {
	std::cout << "DiamondTrap Copy Assignment Operator Called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		_Name = other._Name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap's name: " << _Name << std::endl;
	std::cout << "ClapTrap's name: " << ClapTrap::_Name << std::endl;   
}
