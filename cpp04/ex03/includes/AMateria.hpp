/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:43:05 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 14:31:56 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Characteristics of Abstract Classes
    
    - Can contain implementation:
        Abstract classes can have member variables, constructors, and functions with defined bodies.
        Example: You can provide default behavior in an abstract class.
    
    - Can include pure virtual functions:
        At least one pure virtual function (virtual void func() = 0;) is required for a class to be abstract.
    
    - Base class for inheritance:
        Derived classes can override only the pure virtual functions or also use the concrete methods of the abstract class.
    
    - Use cases:
        Abstract classes are used when you want to create a base class with some shared behavior,
        while also enforcing derived classes to implement specific methods.
*/

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

// Define Abstract Class Materia
class AMateria
{
    protected:
        std::string _Type;
    public:
        AMateria(std::string const &type);
        virtual ~AMateria();
        AMateria(const AMateria &other);
        AMateria &operator=(const AMateria &other);
        
        // virtual copy constructor
        virtual AMateria *clone() const = 0; //implemented in derived class
        std::string const &getType() const;
        virtual void use(ICharacter& target);
};

#endif