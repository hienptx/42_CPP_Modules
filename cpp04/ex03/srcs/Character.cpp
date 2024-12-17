/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:18:34 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 18:11:33 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name): ICharacter(), _name(name)
{
    for (int i = 0; i < 4; i++) 
        _inventory[i] = nullptr;
    for (int i = 0; i < 8; i++) 
        _mOnGround[i] = nullptr;    
    // std::cout << "Character constructed" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
        {
            delete _inventory[i];
            _inventory[i] = nullptr;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (_mOnGround[i] != NULL)
        {
            delete _mOnGround[i];
            _mOnGround[i] = nullptr;
        }
    }
    // std::cout << "Character destructed" << std::endl;
}


Character::Character(const Character& other) : _name(other._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
        {
            delete _inventory[i];
            _inventory[i] = nullptr;
            _inventory[i] = other._inventory[i]->clone();
        }   
    }
    for (int i = 0; i < 8; i++)
    {
        if (_mOnGround[i])
        {
            delete _mOnGround[i];
            _mOnGround[i] = nullptr;
            _mOnGround[i] = other._mOnGround[i]->clone();
        }
    }
    // std::cout << "Character copied" << std::endl;
}


Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        _name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            _inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : nullptr;
        }
        // Reset _mOnGround (no copying needed as it is temporary storage)
        for (int i = 0; i < 8; i++)
            _mOnGround[i] = nullptr;
    }
    // std::cout << "Character assigned" << std::endl;
    return *this;
}


std::string const &Character::getName() const
{
    return _name;
}

// They equip the Materias in the first empty slot they find. 
// This means, in this order: from slot 0 to slot 3. In case they try to add
// a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything
void Character::equip(AMateria* m)
{
    for(int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m->clone();
            break ;
        }
    }
}

// The unequip() member function must NOT delete the Materia!
void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
    {
        std::cerr << "Invalid index or no Materia at index " << idx << std::endl;
        return ;
    }    
    for(int i = 0; i < 8; i++)
    {
        if (!_mOnGround[i])
        {
            _mOnGround[i] = _inventory[idx]->clone();
            _inventory[idx] = nullptr;
            std::cout << "Unequiped materia " << idx << std::endl;
            return ;
        }
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
    {
        std::cerr << "Invalid index or no Materia at index " << idx << std::endl;
        return ;
    }  
    _inventory[idx]->use(target);
}
