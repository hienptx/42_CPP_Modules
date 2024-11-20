/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:38:36 by hipham            #+#    #+#             */
/*   Updated: 2024/11/14 16:38:39 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;

    zombies = zombieHorde(10, "Woo");
    for(int i = 0; i < 10; i++)
    {
        zombies[i].announce();
    }
    delete[]zombies;
    return(0);
}