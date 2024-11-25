#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    // copy constructor - usage
    Fixed const d(b);

    //deep copy
    a = Fixed(1234.4321f);

    // to print objects of Fixed class -> define operator << overloading
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout<<"a is "<<a.toInt()<<" as integer"<<std::endl;
    std::cout<<"b is "<<b.toInt()<<" as integer"<<std::endl;
    std::cout<<"c is "<<c.toInt()<<" as integer"<<std::endl;
    std::cout<<"d is "<<d.toInt()<<" as integer"<<std::endl;
    return 0;
}