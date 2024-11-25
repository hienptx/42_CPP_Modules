#include "Fixed.hpp"

// constructor
Fixed::Fixed():_val(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &copy): _val(copy._val)
{
    std::cout << "Copy constructor called" << std::endl;
    getRawBits();
}

// assignment operator overload, deep copying
Fixed &Fixed::operator=(Fixed& copy)  
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _val = copy._val;
    getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_val);
}

void Fixed::setRawBits(int const raw) {
    _val = raw;
}

// deconstructor
Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}