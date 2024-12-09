/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:37:21 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 09:59:44 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	
	c = b;
	std::cout<<a.getRawBits()<<std::endl;
	std::cout<<b.getRawBits()<<std::endl;
	std::cout<<c.getRawBits()<<std::endl;
	return (0);
}
