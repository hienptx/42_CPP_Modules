/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:38:36 by hipham            #+#    #+#             */
/*   Updated: 2024/11/27 17:05:10 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;

	zombies = zombieHorde(1, "Woo");
	for(int i = 0; i < 1; i++)
		zombies[i].announce();
	delete[]zombies;
	zombies = zombieHorde(3, "Vii");
	for(int i = 0; i < 3; i++)
		zombies[i].announce();
	delete[]zombies;
	return(0);
}