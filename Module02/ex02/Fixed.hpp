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
    Fixed ( const Fixed & );
    Fixed & operator = ( const Fixed & );
    ~Fixed ();

    bool  operator > ( const Fixed & ) const;
    bool  operator < ( const Fixed & ) const;
    bool  operator >= ( const Fixed & ) const;
    bool  operator <= ( const Fixed & ) const;
    bool  operator == ( const Fixed & ) const;
    bool  operator != ( const Fixed & ) ;

    Fixed  operator + ( const Fixed & );
    Fixed  operator - ( const Fixed & );
    Fixed  operator * ( const Fixed & );
    Fixed  operator / ( const Fixed & );

    Fixed operator ++ ();
    Fixed operator ++ (int);
    Fixed operator -- ();
    Fixed operator -- (int);

    static Fixed & max( Fixed &, Fixed &);
    static const Fixed & max( const Fixed &, const Fixed & );
    static Fixed & min( Fixed &, Fixed & ) ;
    static const Fixed & min( const Fixed &, const Fixed & );


    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt ( void ) const;

};

std::ostream & operator << ( std::ostream& , const Fixed& );

#endif