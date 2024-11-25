#include "Fixed.hpp"

// converts the fixed-point value to a floating-point value
float Fixed::toFloat(void) const
{
    return (float)_val / (1 << _fracBits);
}

// converts the fixed-point value to an integer value
int Fixed::toInt(void) const
{
    return(_val >> _fracBits);
}

// operator << overloading -> to cout user-defined data type
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}