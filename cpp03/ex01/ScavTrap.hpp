#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

// In public inheritance private accessifier is not inherited
class ScavTrap : public ClapTrap {
    pritvate:
        std::string _Name;
		unsigned int _HitPoints = 100;
		unsigned int _EnergyPoints = 50;
		unsigned int _AttackDamage = 20;
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void attack(const std::string &target);
        void guardGate();
};

#endif 