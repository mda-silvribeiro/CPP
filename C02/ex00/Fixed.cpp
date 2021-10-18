/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:20:22 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:20:43 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void  ) : _fixedPoint(0) {
    
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( const Fixed & src) {

    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ; 
}

Fixed & Fixed::operator=( const Fixed & rhs) {

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
