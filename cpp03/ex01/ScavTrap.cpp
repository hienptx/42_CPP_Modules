/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:33:28 by hipham            #+#    #+#             */
/*   Updated: 2024/12/12 12:22:25 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Defautl Constructor
ScavTrap::ScavTrap() {
	_Name = "scavTrap";
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << " ScavTrap constructor called" << std::endl;
}

// Parameterized Constructor
ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << name << " ScavTrap constructor called" << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap (const ScavTrap &other) {
	std::cout << _Name << " ScavTrap copy constructor called" << std::endl;
	_Name = other._Name;
	_HitPoints = other._HitPoints;
	_EnergyPoints = other._EnergyPoints;
	_AttackDamage = other._AttackDamage;
}

// Copy assignment Constructor
ScavTrap &ScavTrap::operator=(ScavTrap &other) {
	std::cout << "ScavTrap copy assigment called" << std::endl;
	if (this != &other) {
		_Name = other._Name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	return (*this);
} 

// Destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

// Member functions
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
