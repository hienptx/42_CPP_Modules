/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:42:28 by hipham            #+#    #+#             */
/*   Updated: 2024/11/12 18:51:10 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

// It creates a zombie, name it, and the zombie announces itself.
void randomChump(std::string name)
{
    Zombie new_born(name);

    new_born.announce();
}
