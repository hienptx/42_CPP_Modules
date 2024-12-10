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

int main(void)
{
	ClapTrap clapTrap("Optimus");
	ScavTrap scavTrap("Bublebee");

	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	scavTrap.beRepaired(clapTrap.getAttackDamage());
	std::cout << std::endl;

	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	// enemy.beRepaired(damagePoints);
	std::cout << std::endl;

	scavTrap.attack(scavTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	std::cout << std::endl;
	
	std::cout << scavTrap.getName() << "'s HitPoints = " << scavTrap.getHitPoints() << std::endl;
	std::cout << clapTrap.getName()<< "'s EnergyPointrs = " << clapTrap.getEnergyPoints() << std::endl;
	return (0);
}