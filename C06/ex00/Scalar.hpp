/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:12:47 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/20 22:12:48 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <limits>
#include <climits>
#include <string>
#define FLOAT_MAX std::numeric_limits<float>::max()
#define FLOAT_MIN std::numeric_limits<float>::lowest()
#define DBL_MAX   std::numeric_limits<double>::max()
#define DBL_MIN   std::numeric_limits<double>::lowest()

class Scalar {

    public:
        Scalar( void );
        Scalar( std::string & ref );
        Scalar( const Scalar * src);
        Scalar & operator=(const Scalar *cmp);
        ~Scalar( void );
        void convToChar( void );
        void convToInt( void );
        void convToFloat( void );
        void convToDouble( void );;
        bool forFun( std::string &g);
        const char *printDotZero( double number );
        void callPrint( void );
        void checker( void );

    private:
        std::string _r;
        double _aux;
        bool _digit;
        bool _floatD;
        bool _isString;
};

#endif