#include "Scalar.hpp"

Scalar::Scalar( void ) {
    return ;
}

Scalar::Scalar( std::string & ref ) : _r(ref) {
    if (_r.length() == 1 )
    {
        convToChar();
    }
    return ;
}

Scalar::Scalar( const Scalar * src) {
    *this = src;
    return ;
}

Scalar &Scalar::operator=(const Scalar *cmp) {
    this->_r = cmp->_r;
    return (*this);
}

void Scalar::convToChar( void ) {
    std::cout << "char: " << static_cast<char>(this->_r) << std::endl;
}

Scalar::~Scalar( void ) {

}