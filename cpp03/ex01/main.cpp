/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:17 by hipham            #+#    #+#             */
/*   Updated: 2024/12/12 12:09:36 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	const std::string NC = "\033[0m"; //reset color
	const std::string purple = "\033[35m";
	const std::string red = "\033[31m";
	
	ClapTrap p1;
	ClapTrap p2("Optimus");
	ScavTrap p3("BubleBee");

	std::cout << red << "[Health Info Before]" << NC << std::endl;
	std::cout << "p1's HitPoints = " << p1.getHitPoints() << std::endl;
	std::cout << "p1's EnergyPoints = " << p1.getEnergyPoints() << std::endl;
	std::cout << "p2's HitPoints = " << p2.getHitPoints() << std::endl;
	std::cout << "p2's EnergyPoints = " << p2.getEnergyPoints() << std::endl;
	std::cout << "p3's HitPoints = " << p3.getHitPoints() << std::endl;
	std::cout << "p3's EnergyPoints = " << p3.getEnergyPoints() << std::endl;

	std::cout << purple << "[p1 is playing]" << NC << std::endl;
	p1.attack(p2.getName());
	p2.takeDamage(p1.getAttackDamage());
	p2.beRepaired(p1.getAttackDamage());
	
	std::cout << purple << "[p2 is playing]" << NC << std::endl;
	p2.attack(p1.getName());
	p1.takeDamage(p2.getAttackDamage());
	p1.attack(p2.getName());
	
	std::cout << purple << "[p3 is playing]" << NC << std::endl;
	p3.setEnergyPoints(3);
	for(int i = 0; i < 4; i++) {
		p3.attack(p2.getName());
		p2.takeDamage(p3.getAttackDamage());
	}
	p3.guardGate();

	std::cout << red << "[Health Info after]" << NC << std::endl;
	std::cout << "p1's HitPoints = " << p1.getHitPoints() << std::endl;
	std::cout << "p1's EnergyPoints = " << p1.getEnergyPoints() << std::endl;
	std::cout << "p2's HitPoints = " << p2.getHitPoints() << std::endl;
	std::cout << "p2's EnergyPoints = " << p2.getEnergyPoints() << std::endl;	
	std::cout << "p3's HitPoints = " << p3.getHitPoints() << std::endl;
	std::cout << "p3's EnergyPoints = " << p3.getEnergyPoints() << std::endl;
	return (0);
}

// int main(void)
// {
// 	ClapTrap clapTrap("Optimus");
// 	ScavTrap scavTrap("Bublebee");

// 	clapTrap.attack(scavTrap.getName());
// 	scavTrap.takeDamage(clapTrap.getAttackDamage());
// 	scavTrap.beRepaired(clapTrap.getAttackDamage());
// 	std::cout << std::endl;

// 	clapTrap.attack(scavTrap.getName());
// 	scavTrap.takeDamage(clapTrap.getAttackDamage());
// 	// enemy.beRepaired(damagePoints);
// 	std::cout << std::endl;

// 	scavTrap.attack(scavTrap.getName());
// 	clapTrap.takeDamage(scavTrap.getAttackDamage());
// 	scavTrap.guardGate();
// 	std::cout << std::endl;
	
// 	std::cout << scavTrap.getName() << "'s HitPoints = " << scavTrap.getHitPoints() << std::endl;
// 	std::cout << scavTrap.getName() << "'s EnergyPoints = " << scavTrap.getEnergyPoints() << "\n" << std::endl;

// 	std::cout << clapTrap.getName()<< "'s HitPoints = " << clapTrap.getHitPoints() << std::endl;
// 	std::cout << clapTrap.getName()<< "'s EnergyPoints = " << clapTrap.getEnergyPoints() << std::endl;
// 	return (0);
// }