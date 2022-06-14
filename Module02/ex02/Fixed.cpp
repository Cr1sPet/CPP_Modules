#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( const int fixed ) {
    // std::cout << "Int constructor called" << std::endl;
    this->fixedPointNum = fixed << this->fractionalBitsNum;
}

Fixed::Fixed( const float fixed ) {
    // std::cout << "Float constructor called" << std::endl;
    this->fixedPointNum = roundf( fixed * (1 << this->fractionalBitsNum) );
}

Fixed::Fixed() {
    // std::cout << "Default constructor called" << std::endl;
    this->fixedPointNum = 0;
}

Fixed::Fixed (const Fixed & fixed) {
    // std::cout << "Copy constructor calles" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator = (const Fixed &fixed) {
    
    // std::cout << "Copy assegnment operator called" << std::endl;

    if (this != &fixed) {
        this->fixedPointNum = fixed.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNum;
}

void Fixed::setRawBits( int const raw ) {
    // std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNum = raw;
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

std::ostream &operator << ( std::ostream &out, Fixed const &fixed ) {
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator > ( const Fixed &fixed  ) const{

    if (this->toFloat() > fixed.toFloat()) {
        return true;
    } else {
        return false;
    }

}

bool Fixed::operator < ( const Fixed &fixed ) const{
    return (fixedPointNum < fixed.fixedPointNum);
}

bool Fixed::operator >= ( Fixed const &fixed  ) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator <= ( Fixed const &fixed  ) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator == ( Fixed const &fixed  ) const {
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator != ( Fixed const &fixed  )  {
    return this->getRawBits() != fixed.getRawBits();
}

float Fixed::toFloat() const {
    return (float)this->fixedPointNum / ( 1 << this->fractionalBitsNum );
}

int Fixed::toInt()  const {
    return this->fixedPointNum >> this->fractionalBitsNum;
}

Fixed  Fixed::operator + ( Fixed const &fixed ) {
    Fixed fixed1;
    fixed1.setRawBits(this->fixedPointNum + fixed.fixedPointNum );
    return fixed1;
}

Fixed  Fixed::operator - ( Fixed const &fixed ) {
    Fixed fixed1;
    fixed1.setRawBits(this->fixedPointNum - fixed.fixedPointNum);
    return fixed1;
}

Fixed Fixed::operator * ( Fixed const &fixed ) {
    Fixed fixed1;
    fixed1.setRawBits((this->fixedPointNum * fixed.fixedPointNum) / (1 << this->fractionalBitsNum) );
    return fixed1;
}

Fixed Fixed::operator / ( Fixed const &fixed ) {
    Fixed fixed1;
    fixed1.setRawBits((this->fixedPointNum / fixed.fixedPointNum) * (1 << this->fractionalBitsNum) );
    return fixed1;
}

Fixed Fixed::operator++ (int) {
    Fixed val;
    val.fixedPointNum = this->fixedPointNum++;
    return val;
}

Fixed Fixed::operator++ () {
    Fixed val;
    val.fixedPointNum = ++this->fixedPointNum;
    return val;
}

Fixed Fixed::operator-- (int) {
    Fixed val;
    val.fixedPointNum = this->fixedPointNum--;
    return val;
}

Fixed Fixed::operator-- () {
    Fixed val;
    val.fixedPointNum = --this->fixedPointNum;
    return val;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    if (first > second || first == second) {
        return first;
    }
    return second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {

    if (first > second || first == second) {
            return first;
    }
    return second;
}


Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    if (first < second) {
        return first;
    }
    return second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
    if (first < second) {
        return first;
    }
    return second;
}
