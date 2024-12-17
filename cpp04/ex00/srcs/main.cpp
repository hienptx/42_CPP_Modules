/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:13:36 by hipham            #+#    #+#             */
/*   Updated: 2024/12/16 12:21:23 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[35m[Test Animal Class]\033[0m" << std::endl;
	const Animal* meta = new Animal();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	const Animal a;
	std::cout << a.getType() << " " << std::endl;
	a.makeSound();
	
	std::cout << "\033[35m[Test Dog Class]\033[0m" << std::endl;
	const Animal *j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	
	std::cout << "\033[35m[Test Cat Class]\033[0m" << std::endl;
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	
	std::cout << "\033[35m[Test WrongAnimal Class]\033[0m" << std::endl;
	const WrongAnimal* beta = new WrongAnimal();
	std::cout << beta->getType() << " " << std::endl;
	beta->makeSound();

	std::cout << "\033[35m[Test WrongCat Class]\033[0m" << std::endl;
	const WrongAnimal* x = new WrongCat(); 
	std::cout << x->getType() << " " << std::endl;
	x->makeSound();

	std::cout << std::endl;
	delete meta;
	delete beta;
	delete j;
	delete i;
	delete x;
	return 0;
}