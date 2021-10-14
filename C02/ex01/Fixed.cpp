#include "Fixed.hpp"

Fixed::Fixed( const int i  ) : _fixedPoint(i) {
    
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const float * i  ) : _fixedPoint(*i) {
    
    std::cout << "Default constructor called" << std::endl;
    return ;
}


Fixed::Fixed( Fixed const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    //this->_fixedPoint = src.getRawBits();

    return ; 
}

Fixed & Fixed::operator=( Fixed float & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(rhs.getRawBits());
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
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