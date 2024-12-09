/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:40:26 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 10:13:12 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>

// _fracBits specifies how many bits are used for the fractional part
class Fixed
{
	private:
		int _val;
		static const int8_t _fracBits = 8;

	public:
		// defaut constructor
		Fixed();
		// copy constructor
		Fixed(const Fixed &copy);
		// assignment operator overload, deep copying
		Fixed& operator	= (Fixed &copy);
		// destructor
		~Fixed();
		//get _val member function
		int getRawBits(void) const;
		//set _val member function
		void setRawBits(int const raw);
};

#endif