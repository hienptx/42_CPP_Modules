/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:34:11 by hipham            #+#    #+#             */
/*   Updated: 2024/12/15 17:02:57 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string *Ideas, int n);
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();

        void setIdeas(std::string *Ideas, int n);
        std::string *getIdeas();
};

#endif

// To initialize an array in a copy or copy assignment it needs to be done with for loop.