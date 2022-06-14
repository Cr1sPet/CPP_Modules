#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:

    int                 number;
    static const int    fractionalBitsNum = 8;

public:

    Fixed ( const int );
    Fixed ( const float );

    Fixed ();
    Fixed (const Fixed & fixed);
    Fixed & operator = (const Fixed & fixed);
    ~Fixed ();

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    int toInt ( void ) const;
    float toFloat( void ) const;

};

std::ostream & operator << ( std::ostream& , const Fixed& );

#endif