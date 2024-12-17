/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:50:01 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 18:12:31 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include <iostream>
#include <string>

int main()
{   
    IMateriaSource*src= new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter*me= new Character("me");
    AMateria*tmp;
    // tmp=src->createMateria("fire");
    // me->equip(tmp);
    tmp=src->createMateria("ice");
    tmp=src->createMateria("ice");
    tmp=src->createMateria("ice");
    tmp=src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    me->equip(tmp);
    // me->unequip(2);
    tmp=src->createMateria("cure");
    me->equip(tmp);
    ICharacter*bob= new Character("bob");
    me->use(0,*bob);
    me->use(1,*bob);
    me->use(2,*bob);
    me->use(3,*bob);
    me->use(4,*bob);
    delete bob;
    delete me;
    delete src;
    
    return 0;
}