/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:17 by hipham            #+#    #+#             */
/*   Updated: 2024/12/12 15:41:10 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	const std::string NC = "\033[0m"; //reset color
	const std::string purple = "\033[35m";
	const std::string red = "\033[31m";
	
	ClapTrap p1;
	ScavTrap p2("Optimus");
	FragTrap p3("BubleBee");
	DiamondTrap p4("Hybrid");
	DiamondTrap p5(p4);
	ScavTrap p6;

	p6 = p2;
	std::cout << std::endl; 
	std::cout << red << "[Health Info Before]" << NC << std::endl;
	std::cout << "ClapTrap p1's AttackDamage = " << p1.getAttackDamage() << std::endl;
	std::cout << "ClapTrap p1's HitPoints = " << p1.getHitPoints() << std::endl;
	std::cout << "ClapTrap p1's EnergyPoints = " << p1.getEnergyPoints() << "\n" << std::endl;

	std::cout << "ScavTrap p2's AttackDamage = " << p2.getAttackDamage() << std::endl;
	std::cout << "ScavTrap p2's HitPoints = " << p2.getHitPoints() << std::endl;
	std::cout << "ScavTrap p2's EnergyPoints = " << p2.getEnergyPoints() << "\n" << std::endl;

	std::cout << "FragTrap p3's AttackDamage = " << p3.getAttackDamage() << std::endl;
	std::cout << "FragTrap p3's HitPoints = " << p3.getHitPoints() << std::endl;
	std::cout << "FragTrap p3's EnergyPoints = " << p3.getEnergyPoints()<< "\n" << std::endl;

	std::cout << "DiamondTrap p4's AttackDamage = " << p4.getAttackDamage() << std::endl;
	std::cout << "DiamondTrap p4's HitPoints = " << p4.getHitPoints() << std::endl;
	std::cout << "DiamondTrap p4's EnergyPoints = " << p4.getEnergyPoints() << std::endl;
	std::cout << std::endl; 

	std::cout << purple << "[p1 is playing]" << NC << std::endl;
	p1.attack(p2.getName());
	p2.takeDamage(p1.getAttackDamage());
	p2.beRepaired(p1.getAttackDamage());
	std::cout << std::endl; 
	
	std::cout << purple << "[p2 is playing]" << NC << std::endl;
	p2.attack(p1.getName());
	p1.takeDamage(p2.getAttackDamage());
	p1.attack(p2.getName());
	p2.guardGate();
	std::cout << std::endl; 
	
	std::cout << purple << "[p3 is playing]" << NC << std::endl;
	p3.setEnergyPoints(3);
	for(int i = 0; i < 4; i++) {
		p3.attack(p2.getName());
		p2.takeDamage(p3.getAttackDamage());
	}
	p3.highFivesGuys();
	std::cout << std::endl; 

	std::cout << purple << "[p4 is playing]" << NC << std::endl;
	p4.attack(p3.getName());
	p3.takeDamage(p4.getAttackDamage());
	p1.attack(p4.getName());
	p4.takeDamage(p1.getAttackDamage());
	p4.whoAmI();
	std::cout << std::endl; 

	std::cout << red << "[Health Info after]" << NC << std::endl;
	std::cout << "p1's HitPoints = " << p1.getHitPoints() << std::endl;
	std::cout << "p1's EnergyPoints = " << p1.getEnergyPoints() << std::endl;
	std::cout << "p2's HitPoints = " << p2.getHitPoints() << std::endl;
	std::cout << "p2's EnergyPoints = " << p2.getEnergyPoints() << std::endl;	
	std::cout << "p3's HitPoints = " << p3.getHitPoints() << std::endl;
	std::cout << "p3's EnergyPoints = " << p3.getEnergyPoints() << std::endl;
	std::cout << "p4's HitPoints = " << p4.getHitPoints() << std::endl;
	std::cout << "p4's EnergyPoints = " << p4.getEnergyPoints() << std::endl;

	std::cout << std::endl; 
	return (0);
}

// int main(void)
// {
// 	ClapTrap clapTrap("Optimus");
// 	ScavTrap scavTrap("Bublebee");
// 	FragTrap fragTrap("Autobots");
// 	DiamondTrap diamondTrap("Hybrid");

// 	std::cout << std::endl;
// 	std::cout << clapTrap.getName() << "'s AttackDamage = " << clapTrap.getAttackDamage() << std::endl;
// 	std::cout << clapTrap.getName()<< "'s HitPoints = " << clapTrap.getHitPoints() << std::endl;
// 	std::cout << clapTrap.getName()<< "'s EnergyPoints = " << clapTrap.getEnergyPoints() << "\n" << std::endl;

// 	std::cout << fragTrap.getName() << "'s AttackDamage = " << fragTrap.getAttackDamage() << std::endl;
// 	std::cout << fragTrap.getName() << "'s HitPoints = " << fragTrap.getHitPoints() << std::endl;
// 	std::cout << fragTrap.getName() << "'s EnergyPoints = " << fragTrap.getEnergyPoints() << "\n" << std::endl;
	
// 	std::cout << scavTrap.getName() << "'s AttackDamage = " << scavTrap.getAttackDamage() << std::endl;
// 	std::cout << scavTrap.getName() << "'s HitPoints = " << scavTrap.getHitPoints() << std::endl;
// 	std::cout << scavTrap.getName() << "'s EnergyPoints = " << scavTrap.getEnergyPoints() << "\n" << std::endl;
	
// 	std::cout << diamondTrap.getName() << "'s AttackDamage = " << diamondTrap.getAttackDamage() << std::endl;
// 	std::cout << diamondTrap.getName() << "'s HitPoints = " << diamondTrap.getHitPoints() << std::endl;
// 	std::cout << diamondTrap.getName() << "'s EnergyPoints = " << diamondTrap.getEnergyPoints() << "\n" << std::endl;
	
// 	scavTrap.attack(fragTrap.getName());
// 	fragTrap.takeDamage(scavTrap.getAttackDamage());

// 	clapTrap.attack(fragTrap.getName());
// 	clapTrap.attack(fragTrap.getName());
// 	fragTrap.takeDamage(clapTrap.getAttackDamage());
// 	fragTrap.takeDamage(clapTrap.getAttackDamage());
// 	// fragTrap.beRepaired(clapTrap.getAttackDamage());
// 	std::cout << std::endl;

// 	scavTrap.attack(clapTrap.getName());
// 	clapTrap.takeDamage(scavTrap.getAttackDamage());
// 	scavTrap.guardGate();
// 	std::cout << std::endl;
	
// 	fragTrap.attack(scavTrap.getName());
// 	scavTrap.takeDamage(fragTrap.getAttackDamage());
// 	fragTrap.highFivesGuys();
// 	std::cout << std::endl;
	
// 	diamondTrap.attack(clapTrap.getName());
// 	clapTrap.takeDamage(diamondTrap.getAttackDamage());
// 	diamondTrap.whoAmI();
// 	std::cout << std::endl;
	
// 	std::cout << fragTrap.getName() << "'s HitPoints = " << fragTrap.getHitPoints() << std::endl;
// 	std::cout << fragTrap.getName() << "'s EnergyPoints = " << fragTrap.getEnergyPoints() << "\n" << std::endl;
	
// 	std::cout << scavTrap.getName() << "'s HitPoints = " << scavTrap.getHitPoints() << std::endl;
// 	std::cout << scavTrap.getName() << "'s EnergyPoints = " << scavTrap.getEnergyPoints() << "\n" << std::endl;

// 	std::cout << clapTrap.getName()<< "'s HitPoints = " << clapTrap.getHitPoints() << std::endl;
// 	std::cout << clapTrap.getName()<< "'s EnergyPoints = " << clapTrap.getEnergyPoints() << "\n" << std::endl;
	
// 	std::cout << diamondTrap.getName()<< "'s HitPoints = " << diamondTrap.getHitPoints() << std::endl;
// 	std::cout << diamondTrap.getName()<< "'s EnergyPoints = " << diamondTrap.getEnergyPoints() << "\n" << std::endl;
// 	return (0);
// }