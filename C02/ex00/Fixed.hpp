#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

public:
    Fixed( void );
    Fixed( const Fixed & src);
    ~Fixed( void );

    Fixed & operator=( const Fixed & rhs );
    
    int getRawBits( void ) const;
    void setRawBits( int const raw);

private:
    int _fixedPoint;
    static const int _fBits = 8;
};

#endif