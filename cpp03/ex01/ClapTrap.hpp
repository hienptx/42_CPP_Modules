/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:55:14 by hipham            #+#    #+#             */
/*   Updated: 2024/12/10 14:11:07 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
	protected:
		std::string _Name;
		unsigned int _HitPoints;
		unsigned int _EnergyPoints;
		unsigned int _AttackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(ClapTrap &other);
		virtual ~ClapTrap();

		// Setter
		void setName(const std::string name);
		
		// // Getter
		std::string getName();
		unsigned int getAttackDamage();
		unsigned int getHitPoints();
		unsigned int getEnergyPoints();

		// Virtual functions are member functions whose behavior can be overridden in derived classes.
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif


/*----------------NOTE--------------------*/

// Use protected members if you want to give full control of attributes to derived classes.

// Destructors should be virtual if the class is intended to be used polymorphically.
// Constructors are not virtual because object creation and initialization order are resolved at compile-time, not runtime.
