#include "Fixed.hpp"
#include "Point.hpp"

// Method: Barycentric Coordinates

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    float denominator;
    float lamda1;
    float lamda2;
    float lamda3;

    denominator =   (b.getY() - c.getY())*(a.getX() - c.getX()) 
                    + (c.getX() - b.getX())*(a.getY() - c.getY());
    if (denominator == 0)
        std::cout << "Error: three points do not form a triangle" << std::endl;
    lamda1 =    ((b.getY() - c.getY())*(point.getX() - c.getX()) 
                + (c.getX() - b.getX())*(point.getY() - c.getY())) / denominator;
    lamda2 =    ((c.getY() - a.getY())*(point.getX() - c.getX()) 
                + (a.getX() - c.getX())*(point.getY() - c.getY())) / denominator;
    lamda3 = 1 - lamda1 - lamda2;
    return (lamda1 > 0 && lamda2 > 0 && lamda3 > 0);
}
