#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(  int fixed ) {
    std::cout << "Int constructor called" << std::endl;
    this->number = fixed << this->fractionalBitsNum;
}

Fixed::Fixed( const float fixed ) {
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf( fixed * (1 << this->fractionalBitsNum) );
}

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    number = 0;
}

Fixed::Fixed (const Fixed & fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator = (const Fixed &fixed) {
    
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &fixed) {
        this->number = fixed.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->number = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
    return (float)this->number / ( 1 << this->fractionalBitsNum );
}


int Fixed::toInt() const {
    return this->number >> this->fractionalBitsNum;
}


std::ostream &operator << ( std::ostream &out, Fixed const &fixed ) {
    out << fixed.toFloat();
    return out;
}
