#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed c(-5.7f);
    Fixed e(6);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "a = " << a << "; c = " << c << std::endl;
    std::cout << (a > c) << ": a bigger than c" << "\n" << std::endl;
    std::cout << "a = " << a << "; b = " << b << std::endl;
    std::cout << (a >= b) << ": a bigger than or equal b" << "\n" << std::endl;
    std::cout << "b = " << b << "; c = " << c << std::endl;
    std::cout << (b <= c) << ": b not smaller than or equal c" << "\n" << std::endl;
    std::cout << "b + c = " << (b + c) << std::endl;
    std::cout << "a * e = " << (a * e) << std::endl;
    std::cout << "a - e = " << (a - e) << std::endl;
    std::cout << "e / c = " << (e / c) << "\n" << std::endl;

    Fixed o;
    std::cout << "o = " << o << std::endl;
    std::cout << "++o = "<< ++o <<std::endl;
    std::cout << "o = " << o <<std::endl;
    std::cout << "o++ = " << o++ <<std::endl;
    std::cout << "o = " << o << " \n" << std::endl;

    std::cout << Fixed::max(a,b) << " = max(a, b)" <<std::endl;
    std::cout << Fixed::min(a,b) << " = min(a, b)" << std::endl;
    
    return 0;
}
