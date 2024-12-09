/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:17:22 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 10:19:00 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor
Fixed::Fixed():_val(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

// int constructor & convert int to fixed point value
Fixed::Fixed(const int val): _val(val << _fracBits)
{
	std::cout << "Int constructor called" << std::endl;
}

// Float constructor & convert float to float fixed point value 
Fixed::Fixed(const float val): _val(roundf(val * (1 << _fracBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &copy): _val(copy._val)
{
	std::cout << "Copy constructor called" << std::endl;
}

// assignment operator overload, deep copying
Fixed &Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_val = copy._val;
	return (*this);
}

// deconstructor
Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

// getter
int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_val);
}

// setter function
void Fixed::setRawBits(int const raw) {
	_val = raw;
}

// converts the fixed-point value to a floating-point value
float Fixed::toFloat(void) const
{
	return ((float)_val / (float)(1 << _fracBits));
}

// converts the fixed-point value to an integer value
// >> (Right Shift): The right shift operator discards the specified number of least significant bits (LSBs). 
// This effectively divides the number by 2^_fracBits, , removing the fractional part and leaving only the integer part
int Fixed::toInt(void) const
{
	return(_val >> _fracBits);
}

// operator << overloading -> to cout user-defined data type
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
