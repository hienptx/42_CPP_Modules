/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:17 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 15:20:03 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Optimus");
	ClapTrap enemy = clapTrap;
	enemy.setName("Enemy");
	unsigned int damagePoints = 5;

	std::cout << clapTrap.getName() << std::endl;
	std::cout << clapTrap.getHitPoints() << std::endl;

	clapTrap.attack(enemy.getName());
	enemy.takeDamage(damagePoints);
	enemy.beRepaired(damagePoints);
	
	clapTrap.attack(enemy.getName());
	enemy.takeDamage(damagePoints);
	// enemy.beRepaired(damagePoints);
	
	std::cout << "Enemy's HitPoints = " << enemy.getHitPoints() << std::endl;
	std::cout << "Optimus's EnergyPointrs = " << clapTrap.getEnergyPoints() << std::endl;
	return (0);
}