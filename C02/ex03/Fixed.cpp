/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:04 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:23:06 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0) {

}

Fixed::Fixed(const int aux) {
	
	_fixedPoint = aux << _fBits;
}

Fixed::Fixed(const float aux) {
	
	_fixedPoint = (int)(roundf(aux * (1 << _fBits)));
}

Fixed::Fixed(const Fixed& comp) {
	
	*this = comp;
}

Fixed& Fixed::operator=(const Fixed& comp) {
	
	_fixedPoint = comp._fixedPoint;
	return *this;
}

bool Fixed::operator>(const Fixed& comp) {

	return _fixedPoint > comp._fixedPoint;
}

bool Fixed::operator<(const Fixed& comp) {

	return _fixedPoint < comp._fixedPoint;
}

bool Fixed::operator>=(const Fixed& comp) {

	return _fixedPoint >= comp._fixedPoint;
}

bool Fixed::operator<=(const Fixed& comp) {

	return _fixedPoint <= comp._fixedPoint;
}

bool Fixed::operator==(const Fixed& comp) {

	return _fixedPoint == comp._fixedPoint;
}

bool Fixed::operator!=(const Fixed& comp) {

	return _fixedPoint != comp._fixedPoint;
}

Fixed Fixed::operator+(const Fixed& comp) {

	Fixed ret = Fixed();

	ret.setRawBits(_fixedPoint + comp._fixedPoint);
	return ret;
}

Fixed Fixed::operator-(const Fixed& comp) {

	Fixed ret = Fixed();

	ret.setRawBits(_fixedPoint - comp._fixedPoint);
	return ret;
}

Fixed Fixed::operator*(const Fixed& comp) {

	Fixed ret = Fixed(this->toFloat() * comp.toFloat());
	return ret;
}

Fixed Fixed::operator/(const Fixed& comp) {

	Fixed ret = Fixed(this->toFloat() / comp.toFloat());
	return ret;
}

Fixed Fixed::operator++(void) {
	
	Fixed tmp;

	tmp.setRawBits(++_fixedPoint);
	return tmp;
}

Fixed Fixed::operator++(int) {
	Fixed tmp;

	tmp.setRawBits(_fixedPoint++);
	return tmp;
}

Fixed Fixed::operator--(void) {
	
	Fixed tmp;

	tmp.setRawBits(--_fixedPoint);
	return tmp;
}

Fixed Fixed::operator--(int) {
	
	Fixed tmp;

	tmp.setRawBits(_fixedPoint--);
	return tmp;
}

int Fixed::getRawBits(void) {

	return _fixedPoint;
}

void Fixed::setRawBits(int const raw) {
	
	_fixedPoint = raw;
}

int Fixed::toInt(void) const {

	return _fixedPoint >> _fBits;
}

float Fixed::toFloat(void) const {
	
	return (float)_fixedPoint / (float)(1 << _fBits);
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
