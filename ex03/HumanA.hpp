/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:29 by hipham            #+#    #+#             */
/*   Updated: 2024/11/14 17:13:45 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
        std::string name;
        std::string Weapon;
        HumanA()
        {

        }
        void attack()
        {
            std::cout << name << "attacks with their"  << Weapon << std::endl;
        }
};

class HumanB
{
    public:
        std::string name;
        std::string Weapon;
        HumanB(){};
        void attack()
        {
            std::cout << name << "attacks with their"  << Weapon << std::endl;
        }
};

#endif