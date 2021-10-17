#include "Fixed.hpp"

Fixed::Fixed( void ) {

    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const int i  ) {
    
    std::cout << "Int constructor called" << std::endl;
    _fixedPoint = i << _fBits;
    return ;
}

Fixed::Fixed( const float * i) {
    
    std::cout << "Float constructor called" << std::endl;
    _fixedPoint = 
    return ;
}


Fixed::Fixed( Fixed const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ; 
}

Fixed & Fixed::operator=( Fixed float & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(rhs.getRawBits());
    return *this;
}

float   Fixed::toInt( void ) const {


}

float   Fixed::toFloat( void ) const {



}



int Fixed::getRawBits( void ) const {
    
    return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw) {
    this->_fixedPoint = raw;
}

Fixed::~Fixed( void ) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

std::ostream & operator<<( std::ostream & o, Fixed float & i ) {

    o << i.getFoo();
    return o;
}