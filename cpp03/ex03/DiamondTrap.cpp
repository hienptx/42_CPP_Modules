#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"),
    ScavTrap(),
    FragTrap(),
    _Name(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap constructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << _Name << std::endl;
    std::cout << ClapTrap::_Name << std::endl;   
}