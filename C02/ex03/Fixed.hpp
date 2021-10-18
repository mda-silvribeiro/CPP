#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:
    Fixed( void );
    Fixed( const int i  );
    Fixed( const float i );
    Fixed( const Fixed & src);
    ~Fixed( void );

    int getRawBits( void ) const ;
    void setRawBits( int const raw);
    float   toFloat( void ) const;
    int   toInt( void ) const;

    Fixed & operator=( const Fixed & rhs );
    Fixed & operator-( const Fixed & rhs );
    Fixed & operator+( const Fixed & rhs );
    Fixed & operator*( const Fixed & rhs );
    Fixed & operator/( const Fixed & rhs );

    int operator>( const Fixed& aux);
    int operator<( const Fixed& aux);
    int operator>=( const Fixed& aux);
    int operator<=( const Fixed& aux);
    int operator==( const Fixed& aux);
    int operator!=( const Fixed& aux);

    Fixed operator++(int);
    Fixed operator++( void );
    Fixed operator--(int);
    Fixed operator--( void );

    static Fixed& min(Fixed &a, Fixed &b);
    const static Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    const static Fixed& max(const Fixed &a, const Fixed &b);

private:
    int _fixedPoint;
    static const int _fBits = 8;
};

std::ostream & operator<<( std::ostream & o, const Fixed & i );

#endif