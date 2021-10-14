#include "Fixed.hpp"

Fixed::Fixed( void  ) : _fixedPoint(0) {
    
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    //this->_fixedPoint = src.getRawBits();

    return ; 
}

Fixed & Fixed::operator=( Fixed const & rhs) {

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