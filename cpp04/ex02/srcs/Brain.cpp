/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 12:35:14 by hipham            #+#    #+#             */
/*   Updated: 2024/12/15 17:55:32 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(std::string *Ideas, int n)
{
    std::cout << "Brain Constructor Called" << std::endl;
    for (int i = 0; i < n; i++)
        ideas[i] = Ideas[i];
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain Copy Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain Assignment Called" << std::endl;

    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor Called" << std::endl;
}

std::string *Brain::getIdeas()
{
    return ideas;
}

void Brain::setIdeas(std::string *Ideas, int n)
{
    for (int i = 0; i < n; i++)
        ideas[i] = Ideas[i];
}
