#include "Fixed.hpp"

// constructor
Fixed::Fixed():_val(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

// int constructor & convert int to fixed point value
Fixed::Fixed(const int val): _val(val << _fracBits)
{
    std::cout << "Int constructor called" << std::endl;
}

// Float constructor & convert float to float fixed point value 
Fixed::Fixed(const float val): _val(roundf(val * (1 << _fracBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &copy): _val(copy._val)
{
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
