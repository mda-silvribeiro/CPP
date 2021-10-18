#include "Fixed.hpp"

Fixed::Fixed( void ) {

    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const int i  ) {
    
    std::cout << "Int constructor called" << std::endl;
    _fixedPoint = i << _fBits;
}

Fixed::Fixed( const float i) {
    
    std::cout << "Float constructor called" << std::endl;
    _fixedPoint = (int)(roundf(i *(1 << _fBits)));
}

Fixed::Fixed( const Fixed & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ; 
}

int Fixed::getRawBits( void ) const {
    
    return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw) {

    this->_fixedPoint = raw;
}

Fixed & Fixed::operator=( const Fixed & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(rhs.getRawBits());
    return *this;
}

int   Fixed::toInt( void ) const {

    return _fixedPoint >> _fBits;
};

float   Fixed::toFloat( void ) const {

    return (float)_fixedPoint / (float)(1 << _fBits);
};

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

std::ostream & operator<<( std::ostream & o, const Fixed & i ) {

    o << i.toFloat();
    return o;
}