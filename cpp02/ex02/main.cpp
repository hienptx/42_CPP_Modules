#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a(5);
    Fixed c(-5.7f);
    Fixed b(a);
    Fixed d;
    Fixed e(6);

    // Fixed const b(Fixed(5.05f)*Fixed(2));

    std::cout << (a > c) << ": a bigger than c" << std::endl;
    std::cout << (a >= b) << ": a bigger than or equal b" << std::endl;
    std::cout << (a < c) << ": a not smaller than c" << std::endl;
    std::cout << (b <= c) << ": b not smaller than or equal c" << std::endl;
    std::cout << "b + c = " << (b + c) << std::endl;
    std::cout << "a * e = " << (a * e) << std::endl;
    std::cout << "a - e = " << (a - e) << std::endl;
    std::cout << "a / c = " << (a / c) << std::endl;
    std::cout<<c<<std::endl;
    // std::cout<<++a<<std::endl;
    // std::cout<<a<<std::endl;
    // std::cout<<a++<<std::endl;
    // std::cout<<a<<std::endl;
    // std::cout<<b<<std::endl;
    // std::cout<<Fixed::max(a,b)<<std::endl;
    
    return 0;
}
