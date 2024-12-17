/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:12:54 by hipham            #+#    #+#             */
/*   Updated: 2024/12/16 12:24:42 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
		Class A {
		virtual void f() = 0; ----> a pure virtual function
		};

		An abstract class is a class that is designed to be specifically used as a base class.
		An abstract class contains at least one pure virtual function.
		You declare a pure virtual function by using a pure specifier (= 0) 
		in the declaration of a virtual member function in the class declaration.

		Class B : public A {
		virtual void f() { } = 0 ----> not allowed
		};
		A function declaration cannot have both a pure specifier and a definition.

		A g();
		-> Error: Class A is an abstract class
		void h(A);
		-> Error: Class A is an abstract class

		You cannot use an abstract class as a parameter type, a function return type, 
		or the type of an explicit conversion, nor can you declare an object of an abstract class. 

		A& i(A&);
		You can, however, declare pointers and references to an abstract class.

		EXAMPLE
		int main() {

			A a; -> Error: Class A is an abstract class
			A* pa; -> OK
			B b; -> OK

			static_cast<A>(b); -> Error: Class A is an abstract class
		}
**/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(Animal &other);
		virtual ~Animal();
	public:
		std::string getType() const;
		virtual void makeSound() const = 0; // pure virtual function
};

// Functions to test Abstract Class
void dosomething(Animal &animal); 
Animal& a(Animal &animal);	

#endif