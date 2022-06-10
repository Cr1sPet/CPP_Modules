#include "Fixed.hpp"
#include <iostream>


int main( void ) {
    Fixed a (91);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    Fixed d (12);
    
    std::cout << Fixed::min( a, d ) << std::endl;




    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    return 0;
}