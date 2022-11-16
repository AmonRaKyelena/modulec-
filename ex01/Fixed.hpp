#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixedPoint;
    static const int literal = 8;
public:
    Fixed();
    Fixed(int const number);
    Fixed(float const number);
    ~Fixed();
    Fixed& operator= (const Fixed &fixed);
    float toFloat(void) const;
    int toInt(void) const;
    Fixed(const Fixed &copy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixedPoint);
