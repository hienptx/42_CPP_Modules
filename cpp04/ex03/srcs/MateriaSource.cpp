/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:48:05 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 17:42:07 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        learnedMateria[i] = NULL;
    // std::cout << "MateriaSource constructed" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (learnedMateria[i] != NULL)
        {
            delete learnedMateria[i];
            learnedMateria[i] = NULL;    
        }
    }
    // std::cout << "MateriaSource destructed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.learnedMateria[i])
            learnedMateria[i] = other.learnedMateria[i]; // Create a deep copy
        else
            learnedMateria[i] = nullptr;
    }
    // std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            // Delete existing Materia in the current object
            if (learnedMateria[i])
            {
                delete learnedMateria[i];
                learnedMateria[i] = nullptr;
            }
            // Copy new Materia from the other object
            if (other.learnedMateria[i])
                learnedMateria[i] = other.learnedMateria[i]; // Create a deep copy
        }
    }
    // std::cout << "MateriaSource assigned" << std::endl;
    return *this;
}


// Copies the Materia passed as a parameter and store it in memory so it can be cloned
// later. Like the Character, the MateriaSource can know at most 4 Materias. They
// are not necessarily unique.
void MateriaSource::learnMateria(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (learnedMateria[i] == NULL)
        {
            learnedMateria[i] = m;
            std::cout << "Learned Materia: " << m->getType() << std::endl;
            return ;
        }  
    }
    std::cout << "No more slot available to learn new Materia" << std::endl;
}

// Returns a new Materia. The latter is a copy of the Materia previously learned by
// the MateriaSource whose type equals the one passed as parameter. Returns 0 if
// the type is unknown.
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < 4; i++)
    {
        if(learnedMateria[i] && learnedMateria[i]->getType() == type)
        {
            std::cout << learnedMateria[i]->getType() << " is created" << std::endl;
            return(learnedMateria[i]);
        }
    }
    return NULL;
}  