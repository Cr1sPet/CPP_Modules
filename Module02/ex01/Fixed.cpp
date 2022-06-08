#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( const int fixed ) {
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointNum = fixed << this->fractionalBitsNum;
}

Fixed::Fixed( const float fixed ) {
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointNum = roundf( fixed * (1 << this->fractionalBitsNum) );
}

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

 std::ostream &operator << ( std::ostream &out, Fixed const &fixed ) {
    out << fixed.toFloat();
    return out;
}

float Fixed::toFloat() const {
    return (float)this->fixedPointNum / ( 1 << this->fractionalBitsNum );
}


int Fixed::toInt()  const {
    return this->fixedPointNum >> this->fractionalBitsNum;
}


// std::ostream &operator << (std::ostream &out, Dog const &dog)  {
//     out << " DOG NAME:  " << dog.getA() << std::endl;
//     return out;
// }