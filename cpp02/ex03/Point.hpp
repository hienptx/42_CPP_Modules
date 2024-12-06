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