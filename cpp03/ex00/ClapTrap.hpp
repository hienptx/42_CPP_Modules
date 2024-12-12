/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:14 by hipham            #+#    #+#             */
/*   Updated: 2024/12/12 11:23:31 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string _Name;
		unsigned int _HitPoints;
		unsigned int _EnergyPoints;
		unsigned int _AttackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(ClapTrap &other);
		~ClapTrap();

		// Setter
		void setName(const std::string name);
		void setAttackDamage(const unsigned int amount);
		void setEnergyPoints(const unsigned int amount);
		
		// // Getter
		std::string getName();
		unsigned int getAttackDamage();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif