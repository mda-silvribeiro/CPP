#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

public:
    Fixed( void );
    Fixed( const int i  );
    Fixed( const float * i  );
    Fixed( Fixed const & src);
    ~Fixed( void );

    Fixed & operator=( Fixed const & rhs );
    
    float   toFloat( void ) const;
    int   toInt( void ) const;

private:
    int _fixedPoint;
    static const int _fBits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed float & i );

#endif