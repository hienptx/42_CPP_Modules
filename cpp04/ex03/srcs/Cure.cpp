/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:34:51 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 15:48:04 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Cure constructed" << std::endl;
}

Cure::~Cure()
{
    // std::cout << "Cure destructed" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria("cure")
{
    _Type = other._Type;
    // std::cout << "Cure coppied" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    if(this != &other)
    {
        _Type = other._Type;
        // std::cout << "Cure assigned" << std::endl;
    }   
    return (*this);
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
