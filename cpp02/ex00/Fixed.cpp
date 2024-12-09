/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:38:21 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 10:18:42 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor
Fixed::Fixed():_val(0) {
	std::cout << "Default constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &copy): _val(copy._val) {
	std::cout << "Copy constructor called" << std::endl;
}

// assignment operator overload, deep copying
Fixed &Fixed::operator=(Fixed& copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_val = copy._val;
	getRawBits();
	return (*this);
}

// getter function
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return(_val);
}

// setter function
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_val = raw;
}

// destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
