/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:14:11 by hipham            #+#    #+#             */
/*   Updated: 2024/11/12 19:10:29 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie                // Class declaration
{
    private:                // Accesss specifier
        std::string name;   // Attribute

    public:
        Zombie(std::string n);  //constructor
        void announce(void);    //member function
        ~Zombie();              //deconstructor
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif