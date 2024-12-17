/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 23:01:30 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 14:10:38 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter
{
    protected:
        std::string _name;
        AMateria* _inventory[4];
        AMateria* _mOnGround[8];
    public:
        Character(std::string name);
        Character(const Character &other);
        Character &operator=(const Character &other);
        ~Character();
        
        std::string const &getName() const override;
        void equip(AMateria* m) override;
        void unequip(int idx) override;
        void use(int idx, ICharacter &target) override;        
};

#endif