#pragma once

#include <iostream>
#include <string>

class Fixed
{
private:
    int numberStore;
    static const int literal = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &copy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};


