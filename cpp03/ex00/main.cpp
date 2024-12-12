/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:17 by hipham            #+#    #+#             */
/*   Updated: 2024/12/12 11:26:17 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	const std::string NC = "\033[0m"; //reset color
    const std::string purple = "\033[35m";
    const std::string red = "\033[31m";
	
	ClapTrap p1;
	ClapTrap p2("Optimus");
	ClapTrap p3("BubleBee");
	unsigned int _DP = 5;
	unsigned int _DP1 = 10;
	unsigned int _DP2 = 1;

	std::cout << red << "[Health Info Before]" << NC << std::endl;
	std::cout << "p1's HitPoints = " << p1.getHitPoints() << std::endl;
	std::cout << "p1's EnergyPoints = " << p1.getEnergyPoints() << std::endl;
	std::cout << "p2's HitPoints = " << p2.getHitPoints() << std::endl;
	std::cout << "p2's EnergyPoints = " << p2.getEnergyPoints() << std::endl;
	std::cout << "p3's HitPoints = " << p3.getHitPoints() << std::endl;
	std::cout << "p3's EnergyPoints = " << p3.getEnergyPoints() << std::endl;

	std::cout << purple << "[p1 is playing]" << NC << std::endl;
	p1.setAttackDamage(_DP);
	p1.attack(p2.getName());
	p2.takeDamage(_DP);
	p2.beRepaired(_DP);
	
	std::cout << purple << "[p2 is playing]" << NC << std::endl;
	p2.setAttackDamage(_DP1);
	p2.attack(p1.getName());
	p1.takeDamage(_DP1);
	p1.attack(p2.getName());
	
	std::cout << purple << "[p3 is playing]" << NC << std::endl;
	p3.setEnergyPoints(3);
	p3.setAttackDamage(_DP2);
	for(int i = 0; i < 4; i++) {
		p3.attack(p2.getName());
		p2.takeDamage(_DP2);
	}
	p3.beRepaired(_DP2);

	std::cout << red << "[Health Info after]" << NC << std::endl;
	std::cout << "p1's HitPoints = " << p1.getHitPoints() << std::endl;
	std::cout << "p1's EnergyPoints = " << p1.getEnergyPoints() << std::endl;
	std::cout << "p2's HitPoints = " << p2.getHitPoints() << std::endl;
	std::cout << "p2's EnergyPoints = " << p2.getEnergyPoints() << std::endl;	
	std::cout << "p3's HitPoints = " << p3.getHitPoints() << std::endl;
	std::cout << "p3's EnergyPoints = " << p3.getEnergyPoints() << std::endl;
	return (0);
}