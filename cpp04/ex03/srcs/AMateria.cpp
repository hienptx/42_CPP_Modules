/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:28:49 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 15:47:15 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _Type(type)
{ 
    // std::cout << "AMateria constructed" << std::endl;
}

AMateria::~AMateria()
{
    // std::cout << "AMateria destructed" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    // std::cout << "AMateria coppied" << std::endl;
    _Type = other._Type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if(this != &other)
    {
        _Type = other._Type;
        // std::cout << "AMateria assigned" << std::endl;
    }   
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}

std::string const &AMateria::getType() const
{
    return(_Type);
}
