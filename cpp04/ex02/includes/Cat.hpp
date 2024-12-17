/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:20:08 by hipham            #+#    #+#             */
/*   Updated: 2024/12/15 18:01:26 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_Brain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(Cat &other);
		~Cat();
	
	public:
		void setBrainIdeas(std::string *ideas, int n);
		std::string *getBrainIdeas();
		void makeSound() const;
};

#endif

