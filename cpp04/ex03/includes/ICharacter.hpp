/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:06:54 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 14:50:25 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Characteristics of an Interface

    - Pure Virtual Functions:
        A pure virtual function is declared by assigning = 0 to the function declaration in the base class.
        Example: virtual void doSomething() = 0;
        
    - No Implementation:
        An interface does not provide implementations for its methods, leaving it to the derived classes.

    - No Objects of Interface:
        An interface cannot be instantiated directly because it is an abstract class.

    - Derived Classes Must Implement:
        Any concrete (non-abstract) class that derives from the interface must provide 
        implementations for all pure virtual functions.

    - Multiple Inheritance:
        C++ allows multiple inheritance, so a class can implement multiple interfaces.
*/

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>

class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter () {}
        virtual std::string const &getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter &target) = 0;
};
    
#endif