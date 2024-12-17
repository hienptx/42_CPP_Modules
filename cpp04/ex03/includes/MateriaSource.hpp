/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:14:17 by hipham            #+#    #+#             */
/*   Updated: 2024/12/17 13:48:23 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria* learnedMateria[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource &operator=(const MateriaSource& other);
        
        void learnMateria(AMateria*) override;
        AMateria* createMateria(std::string const &type) override;       
};

#endif