#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap Constructor Called" << std::endl;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Let's go party" << std::endl;
}