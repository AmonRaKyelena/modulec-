#include "Fixed.hpp"

Fixed::Fixed() 
{
    std::cout << "Default constructor called" << std::endl;
    numberStore = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : numberStore(copy.numberStore)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &fixed)
{
    
    std::cout << "Copy assignment operator called" << std::endl;
    numberStore = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return numberStore;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    numberStore = raw;
}