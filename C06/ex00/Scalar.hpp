#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>

class Scalar {

    public:
        Scalar( void );
        Scalar( std::string & ref );
        Scalar( const Scalar * src);
        Scalar & operator=(const Scalar *cmp);
        ~Scalar( void );
        void convToChar( void );
        void convToInt( void );
        void convToFloat( void );
        void convToDouble( void );

    private:
        std::string _r;
        double _aux;
};

#endif