/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:47:15 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 17:00:00 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") 
{
    // std::cout << "Ice constructed" << std::endl;
}

Ice::~Ice()
{
    // std::cout << "Ice destructed" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
    _Type = other._Type;
    // std::cout << "Ice coppied" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    if(this != &other)
    {
        // std::cout << "Ice assigned" << std::endl;
    }   
    return (*this);
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}