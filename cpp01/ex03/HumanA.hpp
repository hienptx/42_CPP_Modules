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

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _Aname;
        Weapon& _Aweapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        void attack();
        ~HumanA();
};

#endif
