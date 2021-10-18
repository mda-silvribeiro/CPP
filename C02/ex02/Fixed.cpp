/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:22:16 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:22:22 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
    _fixedPoint = 0;
    return ;
}

Fixed::Fixed( const int i  ) {
    
    _fixedPoint = i << _fBits;
}

Fixed::Fixed( const float i) {
    
    _fixedPoint = (int)(roundf(i *(1 << _fBits)));
}

Fixed::Fixed( const Fixed & src) {

    *this = src;
    return ; 
}

int Fixed::getRawBits( void ) const {
    
    return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw) {

    this->_fixedPoint = raw;
}

int   Fixed::toInt( void ) const {

    return _fixedPoint >> _fBits;
};

float   Fixed::toFloat( void ) const {

    return (float)_fixedPoint / (float)(1 << _fBits);
};

Fixed & Fixed::operator=( const Fixed & rhs) {

    this->setRawBits(rhs.getRawBits());
    return *this;
}

Fixed & Fixed::operator+( const Fixed & rhs) {

    this->setRawBits(_fixedPoint + rhs.getRawBits());
    return *this;
}

Fixed & Fixed::operator-( const Fixed & rhs) {

    this->setRawBits(_fixedPoint - rhs.getRawBits());
    return *this;
}

Fixed & Fixed::operator*( const Fixed & rhs) {

    this->setRawBits(_fixedPoint * rhs.getRawBits() >> _fBits);
    return *this;
}

Fixed & Fixed::operator/( const Fixed & rhs) {

     this->setRawBits(_fixedPoint << _fBits / rhs.getRawBits());
    return *this;
}

int Fixed::operator>(const Fixed& aux) {
    
    return _fixedPoint > aux.getRawBits();
}

int Fixed::operator<(const Fixed& aux) {

    return _fixedPoint < aux.getRawBits();
}

int Fixed::operator>=(const Fixed& aux) {
    
    return _fixedPoint >= aux.getRawBits();
}

int Fixed::operator<=(const Fixed& aux) {
    
    return _fixedPoint <= aux.getRawBits();
}

int Fixed::operator==(const Fixed& aux) {
    
    return _fixedPoint == aux.getRawBits();
}

int Fixed::operator!=(const Fixed& aux) {
    
    return _fixedPoint != aux.getRawBits();
}

Fixed Fixed::operator++(int) {
    Fixed j;

    j.setRawBits(_fixedPoint++);
    return j;
}

Fixed Fixed::operator++( void ) {
    
    ++_fixedPoint;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed j;
    
    j.setRawBits(_fixedPoint--);
    return j;
}

Fixed Fixed::operator--( void ) {
    
    --_fixedPoint;
    return (*this);
}


Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a > b ? b : a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return ((Fixed&)a > b ? b : a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
     return ((Fixed&)a > b ? a : b);
}

Fixed::~Fixed( void ) {

    return ;
}

std::ostream & operator<<( std::ostream & o, const Fixed & i ) {

    o << i.toFloat();
    return o;
}
