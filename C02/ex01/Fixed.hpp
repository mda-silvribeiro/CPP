/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:21:29 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/18 18:21:30 by mda-silv         ###   ########.fr       */
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

    Fixed & operator=( const Fixed & rhs );
    int getRawBits( void ) const ;
    void setRawBits( int const raw);
    float   toFloat( void ) const;
    int   toInt( void ) const;

private:
    int _fixedPoint;
    static const int _fBits = 8;
};

std::ostream & operator<<( std::ostream & o, const Fixed & i );

#endif
