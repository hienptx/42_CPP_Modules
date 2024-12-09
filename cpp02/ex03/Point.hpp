/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hipham <hipham@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:39:04 by hipham            #+#    #+#             */
/*   Updated: 2024/12/09 10:39:14 by hipham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point {
	private:
		Fixed const _x; 
		Fixed const _y;
	public:
		Point(); //constructor
		Point(const float x, const float y); //parameterized
		Point(const Point &copy); // copy constructor
		Point& operator=(const Point &copy); // A copy assignment operator overload
		~Point(); // destructor

		Fixed getX() const;
		Fixed getY() const;
};  

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif