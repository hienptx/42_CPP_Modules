/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:35 by hipham            #+#    #+#             */
/*   Updated: 2024/11/28 13:51:24 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _Bname;
		Weapon *_Bweapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void attack();
		~HumanB();
};

#endif
