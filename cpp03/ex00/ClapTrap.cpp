/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:11 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 15:37:03 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _Name(name) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): _Name(other._Name) {
	_HitPoints = other._HitPoints;
	_EnergyPoints = other._EnergyPoints;
	_AttackDamage = other._AttackDamage;
	std::cout << "ClapTrap copy constructor called" << std::endl
}

ClapTrap &ClapTrap::operator=(ClapTrap &other) {
	std::cout << "ClapTrap copy assigment called" << std::endl;
	if (this != &other) {
		_Name = other._Name;
		_HitPoints = other._HitPoints;
		_EnergyPoints = other._EnergyPoints;
		_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap copy destructor called" << std::endl;
}

// Setter
void ClapTrap::setAttackDamage(unsigned int amount) {
	_AttackDamage = amount;
}

unsigned int ClapTrap::getAttackDamage() {
	return (_AttackDamage);
}
unsigned int ClapTrap::getHitPoints() {
	return (_HitPoints);
}
unsigned int ClapTrap::getEnergyPoints() {
	return (_EnergyPoints);
}

// When ClapTrap attacks, it causes its target to lose <attack damage> hit points.
void ClapTrap::attack(const std::string& target) {

	ClapTrap Enemy(target);
	// check for current EnergyPoints and Hitpoints
	if (_HitPoints > 0 && _EnergyPoints > 0) {
		_AttackDamage = 2;
		std::cout << _Name << " attacks " << target;;
	}
	else std::cout << "Not enough EnergyPoints or HitPoints to attack " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	setAttackDamage(amount);
	std::cout << "causing " <<	amount << "points of damage"
}

void beRepaired(unsigned int amount) {

}
