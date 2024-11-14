/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:42:48 by hipham            #+#    #+#             */
/*   Updated: 2024/11/14 17:45:16 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        std::string getType()
        {
            const std::string &typeREF = type;
            return(typeREF);
        }
        void setType(std::string *newType)
        {
            newType = &type;
        }
};

Weapon::Weapon(std::string type)
{
    
}

#endif