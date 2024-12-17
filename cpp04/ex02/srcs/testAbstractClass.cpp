/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testAbstractClass.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:57:43 by hipham            #+#    #+#             */
/*   Updated: 2024/12/16 12:12:19 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void dosomething(Animal &animal) 
{
	std::cout << "Is running" << std::endl;
	animal.makeSound();
}

Animal& a(Animal &animal)
{
	animal.makeSound();
	return(animal);
}

// Animal b(void) // -> Throw Error
// {
// 	std::cout << "Just a Test" << std::endl;
// }

// void c(Animal d) // -> Throw Error
// {
// 	std::cout << "Just a Test" << std::endl;
// 	d.makeSound();
// }
