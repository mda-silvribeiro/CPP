/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:23:10 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:23:13 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:
    Fixed( void );
    Fixed( const int i  );
    Fixed( const float i );
    Fixed( const Fixed & src);
    ~Fixed( void );

    Fixed& operator=(const Fixed& comp);
    int getRawBits( void );
    void setRawBits( int const raw);
    float   toFloat( void ) const;
    int   toInt( void ) const;

    Fixed operator+(const Fixed& comp);
	Fixed operator-(const Fixed& comp);
	Fixed operator*(const Fixed& comp);
	Fixed operator/(const Fixed& comp);

    bool operator>(const Fixed& comp);
	bool operator<(const Fixed& comp);
	bool operator>=(const Fixed& comp);
	bool operator<=(const Fixed& comp);
	bool operator==(const Fixed& comp);
	bool operator!=(const Fixed& comp);


    Fixed operator++(int);
    Fixed operator++( void );
    Fixed operator--(int);
    Fixed operator--( void );

    static Fixed& min(Fixed &a, Fixed &b);
    const static Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    const static Fixed& max(const Fixed &a, const Fixed &b);

private:
    int _fixedPoint;
    static const int _fBits = 8;
};

std::ostream & operator<<( std::ostream & o, const Fixed & i );

#endif
