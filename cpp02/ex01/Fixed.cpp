#include "Fixed.hpp"

// constructor
Fixed::Fixed():_val(0)
{
    std::cout << "Default constructor called" << std::endl;
}
// int constructor
Fixed::Fixed(const int val): _val(val << _fracBits)
{
    std::cout << "Int constructor called" << std::endl;

}
// Float constructor
Fixed::Fixed(const float val)
{
    _val = val;
    std::cout << "Float constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &copy)
{
    _val = copy._val;
    std::cout << "Copy constructor called" << std::endl;
}

// assignment operator overload, deep copying
Fixed &Fixed::operator=(const Fixed& copy)  
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        _val = copy._val;
    return (*this);
}

// deconstructor
Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_val);
}

void Fixed::setRawBits(int const raw) {
    _val = raw;
}