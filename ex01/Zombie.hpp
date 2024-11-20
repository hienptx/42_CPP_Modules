/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:38:53 by hipham            #+#    #+#             */
/*   Updated: 2024/11/14 16:38:55 by hipham           ###   ########.fr       */
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
        Zombie();  //constructor
        void set_name(std::string n)
        {
            name = n;
        }
        void announce(void);   //member function
        ~Zombie();              //deconstructor
};

Zombie* zombieHorde(int N, std::string name);

#endif