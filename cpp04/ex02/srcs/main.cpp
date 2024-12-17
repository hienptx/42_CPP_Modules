/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:13:36 by hipham            #+#    #+#             */
/*   Updated: 2024/12/16 11:58:02 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "\033[35m[Test Abstract Class]\033[0m" << std::endl;
	// Animal a; 	// -> Throw error
	Dog dog;
	a(dog);
	dosomething(dog);
	
	int n = 4;
	std::string dogIdeas[2] = {"...be loyal", "...be outside"};
	std::string catIdeas[2] = {"...be lazy", "...be ninja"};
	Animal *animal[n];
	
	// Loop creat n/2 Dogs:
	std::cout << "\033[35m[Test Creating Array of Dog]\033[0m" << std::endl;
	for (int i = 0; i < n/2; i++)
	{
		animal[i] = new Dog();
		Dog *dog = dynamic_cast<Dog*>(animal[i]);
		if (dog)
		{
			dog->setBrainIdeas(dogIdeas, 2);
			for (int i = 0; i < 2; i++)
				std::cout << dog->getBrainIdeas()[i] << std::endl;	
		}
		dog->makeSound();
	}
	// Loop creat n/2 Cats:
	std::cout << "\033[35m[Test Creating Array of Cat]\033[0m" << std::endl;
	for (int i = n/2; i < n; i++)
	{
		animal[i] = new Cat();
		Cat *cat = dynamic_cast<Cat*>(animal[i]);
		if (cat)
		{
			cat->setBrainIdeas(catIdeas, 2);
			for (int i = 0; i < 2; i++)
				std::cout << cat->getBrainIdeas()[i] << std::endl;	
		}
		cat->makeSound();
	}
	// Delete animal array
	for (int i = 0; i < n; i++)
		delete animal[i];
	return 0;
}