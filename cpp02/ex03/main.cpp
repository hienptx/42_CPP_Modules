#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point const a(3, 3);
    Point const b(0, 3);
    Point const c(3, 0);
    Point const point1(2, 2);
    Point const point2(3, 3);
    
    std::cout << "Point1 located inside? " << bsp(a, b, c, point1) << std::endl;
    std::cout << "Point2 located outside? " << bsp(a, b, c, point2) << std::endl;
    return 0;
}
