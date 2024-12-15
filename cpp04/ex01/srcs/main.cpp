/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:13:36 by hipham            #+#    #+#             */
/*   Updated: 2024/12/13 15:18:26 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* beta = new WrongAnimal();
	const WrongAnimal* x = new WrongCat(); 
	std::cout << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	x->makeSound();
	j->makeSound();
	meta->makeSound();
	beta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete x;
	return 0;
}