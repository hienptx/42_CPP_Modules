/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:30:31 by hipham            #+#    #+#             */
/*   Updated: 2024/12/12 12:40:08 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	_Name = "fragTrap";
	std::cout << _Name << " FragTrap Constructor Called" << std::endl;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << name << " FragTrap Constructor Called" << std::endl;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	_Name = other._Name;
	_HitPoints = other._HitPoints;
	_EnergyPoints = other._EnergyPoints;
	_AttackDamage = other._AttackDamage;
}

FragTrap &FragTrap::operator=(FragTrap &other) {
	std::cout << "FragTrap Copy Assignment Constructor Called" << std::endl;
	if (this != &other) {
		_Name = other._Name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Let's go party" << std::endl;
}