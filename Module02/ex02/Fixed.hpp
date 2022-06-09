#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:

    int                 fixedPointNum;
    static const int    fractionalBitsNum = 8;

public:

    Fixed ( const int );

    Fixed ( const float );

    Fixed ();
    Fixed (const Fixed & fixed);
    ~Fixed ();
    Fixed & operator = (const Fixed & fixed);
    bool  operator> (const Fixed & fixed) const;
    bool  operator < (const Fixed & fixed);
    bool  operator >= (const Fixed & fixed);
    bool  operator <= (const Fixed & fixed);
    bool  operator == (const Fixed & fixed);
    bool  operator != (const Fixed & fixed);

    Fixed  operator + (const Fixed & fixed);
    Fixed  operator - (const Fixed & fixed);
    Fixed  operator * (const Fixed & fixed);
    Fixed  operator / (const Fixed & fixed);

    Fixed operator ++ ();
    Fixed operator ++ (int);
    Fixed operator -- ();
    Fixed operator -- (int);


    // static const Fixed &max(Fixed const &first, Fixed const &second)  {
    //     // return (first > second) ? first : second;
    //     if (first > second) {
    //         return first;
    //     } else {
    //         return second;
    //     }
    // }

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt ( void ) const;

};

std::ostream & operator << ( std::ostream& , const Fixed& );

#endif