#include "Fixed.hpp"

Fixed::Fixed() 
{
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::Fixed(int const number) 
{
    std::cout << "Int constructor called" << std::endl;
    fixedPoint = (number << literal);
}

Fixed::Fixed(float const number)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPoint = roundf(number * (1 << literal));
}

float Fixed::toFloat(void) const
{
    return ((float)fixedPoint / (float)(1 << literal));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : fixedPoint(copy.fixedPoint)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &fixed)
{
    
    std::cout << "Copy assignment operator called" << std::endl;
    fixedPoint = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixedPoint = raw;
}

int Fixed::toInt(void) const
{
    return fixedPoint >> literal;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixedPoint)
{
    return (out << fixedPoint.toFloat());
}