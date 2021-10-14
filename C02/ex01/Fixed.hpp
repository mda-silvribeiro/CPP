#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

public:
    Fixed( const int i  );
    Fixed( Fixed const & src);
    ~Fixed( void );

    Fixed & operator=( Fixed const & rhs );
    Fixed( const float * i  );
    
    float   toFloat( void ) const;
    float   toInt( void ) const;


    int getRawBits( void ) const;
    void setRawBits( int const raw);

private:
    int _fixedPoint;
    static const int _fBits = 8;
};
std::ostream & operator<<( std::ostream & o, Fixed float & i );

#endif