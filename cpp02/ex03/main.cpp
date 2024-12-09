/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:36:04 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 10:36:42 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(5, 0);
	Point b(5, 20);
	Point c(0, 5);

	// Test case 1: Point inside the triangle
	Point p1(1, 1);
	std::cout << "Test case 1: " << (bsp(a, b, c, p1) ? "Inside" : "Outside") << std::endl;

	// Test case 2: Point outside the triangle
	Point p2(3, 12);
	std::cout << "Test case 2: " << (bsp(a, b, c, p2) ? "Inside" : "Outside") << std::endl;

	// Test case 3: Point on the triangle vertex
	Point p3(0, 5);
	std::cout << "Test case 3: " << (bsp(a, b, c, p3) ? "Inside" : "Outside") << std::endl;

	// Test case 4: Point on the triangle edge
	Point p4(2.5, 2);
	std::cout << "Test case 4: " << (bsp(a, b, c, p4) ? "Inside" : "Outside") << std::endl;

	Point p5(-2.5, 0);
	std::cout << "Test case 5: " << (bsp(a, b, c, p5) ? "Inside" : "Outside") << std::endl;
	Point p6(5, 0);
	std::cout << "Test case 6: " << (bsp(a, b, c, p6) ? "Inside" : "Outside") << std::endl;
	Point p7(4, 0.1);
	std::cout << "Test case 7: " << (bsp(a, b, c, p7) ? "Inside" : "Outside") << std::endl;
	Point p8(2.5, 0);
	std::cout << "Test case 8: " << (bsp(a, b, c, p8) ? "Inside" : "Outside") << std::endl;
}

