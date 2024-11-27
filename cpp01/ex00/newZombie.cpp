/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:41:13 by hipham            #+#    #+#             */
/*   Updated: 2024/11/27 16:34:59 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// It creates a zombie, name it, and return it so you can use it outside of the function scope.
// Dynamically create memory on heap
Zombie *newZombie(std::string name)
{
	Zombie *new_zombie = new Zombie(name);

	return (new_zombie);
}
