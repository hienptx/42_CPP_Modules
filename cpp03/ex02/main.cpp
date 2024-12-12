/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:17 by hipham            #+#    #+#             */
/*   Updated: 2024/12/10 14:16:55 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Optimus");
	ScavTrap scavTrap("Bublebee");
	FragTrap fragTrap("Autobots");
	
	std::cout << clapTrap.getName() << "'s AttackDamage = " << clapTrap.getAttackDamage() << std::endl;
	std::cout << clapTrap.getName()<< "'s HitPoints = " << clapTrap.getHitPoints() << std::endl;
	std::cout << clapTrap.getName()<< "'s EnergyPoints = " << clapTrap.getEnergyPoints() << "\n" << std::endl;

	std::cout << fragTrap.getName() << "'s AttackDamage = " << fragTrap.getAttackDamage() << std::endl;
	std::cout << fragTrap.getName() << "'s HitPoints = " << fragTrap.getHitPoints() << std::endl;
	std::cout << fragTrap.getName() << "'s EnergyPoints = " << fragTrap.getEnergyPoints() << "\n" << std::endl;
	
	std::cout << scavTrap.getName() << "'s AttackDamage = " << scavTrap.getAttackDamage() << std::endl;
	std::cout << scavTrap.getName() << "'s HitPoints = " << scavTrap.getHitPoints() << std::endl;
	std::cout << scavTrap.getName() << "'s EnergyPoints = " << scavTrap.getEnergyPoints() << "\n" << std::endl;
	
	scavTrap.attack(fragTrap.getName());
	fragTrap.takeDamage(scavTrap.getAttackDamage());

	clapTrap.attack(fragTrap.getName());
	clapTrap.attack(fragTrap.getName());
	fragTrap.takeDamage(clapTrap.getAttackDamage());
	fragTrap.takeDamage(clapTrap.getAttackDamage());
	// fragTrap.beRepaired(clapTrap.getAttackDamage());
	std::cout << std::endl;

	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	scavTrap.guardGate();
	std::cout << std::endl;
	
	fragTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(fragTrap.getAttackDamage());
	fragTrap.highFivesGuys();
	std::cout << std::endl;
	
	std::cout << fragTrap.getName() << "'s HitPoints = " << fragTrap.getHitPoints() << std::endl;
	std::cout << fragTrap.getName() << "'s EnergyPoints = " << fragTrap.getEnergyPoints() << "\n" << std::endl;
	
	std::cout << scavTrap.getName() << "'s HitPoints = " << scavTrap.getHitPoints() << std::endl;
	std::cout << scavTrap.getName() << "'s EnergyPoints = " << scavTrap.getEnergyPoints() << "\n" << std::endl;

	std::cout << clapTrap.getName()<< "'s HitPoints = " << clapTrap.getHitPoints() << std::endl;
	std::cout << clapTrap.getName()<< "'s EnergyPoints = " << clapTrap.getEnergyPoints() << std::endl;
	return (0);
}