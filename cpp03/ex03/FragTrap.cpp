#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap Constructor Called" << std::endl;
	_HitPoints = 110;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Constructor Called" << std::endl;
	_HitPoints = 110;
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
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Let's go party" << std::endl;
}
