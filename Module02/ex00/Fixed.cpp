#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    fixedPointNum = 0;
}

Fixed::Fixed (const Fixed & fixed) {
    std::cout << "Copy constructor calles" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator = (const Fixed &fixed) {
    
    std::cout << "Copy assegnment operator called" << std::endl;

    if (this != &fixed) {
        this->fixedPointNum = fixed.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNum;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNum = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
