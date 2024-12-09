/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:37:58 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 10:38:16 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> 

class Fixed
{
	private:
		int _val;
		static const int8_t _fracBits = 8;

	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();

		// conversion
		float toFloat(void) const;
		int toInt(void) const;

		// Comparison 
		bool operator<(const Fixed& val) const;
		bool operator<=(const Fixed& val) const;
		bool operator>(const Fixed& val) const;
		bool operator>=(const Fixed& val) const;
		bool operator==(const Fixed& val) const;
		bool operator!=(const Fixed& val) const;
		
		// Arithmetic
		float operator+(const Fixed& val) const;
		float operator-(const Fixed& val) const;
		float operator*(const Fixed& val) const;
		float operator/(const Fixed& val) const;
		
		// Increment & Decrement
		Fixed& operator++(); //Pre-increment
		Fixed operator++(int); //Post-increment
		Fixed& operator--(); // Pre-decrement
		Fixed operator--(int); //pre-decrement   
		
		// return reference to min
		static Fixed min(Fixed& a, Fixed& b);
		static Fixed min(const Fixed& a, const Fixed& b);
		
		// return reference to max
		static Fixed max(Fixed& a, Fixed& b);
		static Fixed max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif