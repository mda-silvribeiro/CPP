/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:12:34 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/20 22:12:35 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar( void ) {
    return ;
}

Scalar::Scalar( std::string & ref ) : _r(ref), _digit(false), _floatD(false), _isString(false){
    if (_r.length() == 1 )
    {
        _aux = static_cast<int>(ref[0]);
        if ((isdigit(_aux)))
        {
            _floatD = true;
            _digit = true;
        }
        callPrint();
        return ;
    }
    _aux = atof(ref.data());
    if (_aux)
    {
        if (_r[0] == '-' && !isdigit(_r[1]))
        {
            callPrint();
            return ;
        }
        checker();
        _floatD = true;
        _digit = true;
        callPrint();
        return ;
    }
    if (_r.length() > 1) {
        checker();
        callPrint();
    }
    return ;
}

Scalar::Scalar( const Scalar * src) {
    *this = src;
    return ;
}

Scalar &Scalar::operator=(const Scalar *cmp) {
    this->_r = cmp->_r;
    return (*this);
}

void Scalar::convToChar( void ) {
    if ((_r.length() > 1 && forFun(_r)) || _isString || _aux > 127 || (_r[0] == '-' && !isdigit(_r[1])))
        std::cout << "char: impossible" << std::endl;
    else if ((_r.length() == 1 && isdigit(_aux) ) ||  (!_isString &&  _aux < 32)
        || (!_isString &&  _aux == 127))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(_aux) << std::endl;
}

void Scalar::convToInt( void ) {
    if ( (!_isString && _digit && _aux <= INT_MAX && _aux >= INT_MIN))
    {
        if (_r.length() == 1 && _r[0] >= '0' && _r[0] <= '9' )
            std::cout << "int: " << static_cast<int>(_aux) - 48 << std::endl;
        else
            std::cout << "int: " << static_cast<int>(_aux) << std::endl;
    }
    else
        std::cout << "int: impossible" << std::endl;
}

void Scalar::convToFloat( void ) {
    std::cout << "float: ";
    if ( _r[0] == '-' && _aux < 0 && _aux > -1 && _floatD && !_isString)
        std::cout << "-";
    if ( forFun(_r) || (!_isString && _floatD && _aux <= FLOAT_MAX && _aux >= FLOAT_MIN))
    {
        if (forFun(_r))
            std::cout << static_cast<float>(_aux) - 48 << "f" << std::endl;
        else if (_r.length() == 1 && _r[0] >= '0' && _r[0] <= '9' )
            std::cout << static_cast<int>(_aux) - 48 << printDotZero(static_cast<float>(_aux) -48) << "f" << std::endl;
        else
            std::cout << static_cast<int>(_aux) << printDotZero(static_cast<float>(_aux)) << "f" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

void Scalar::convToDouble( void ) {
    std::cout << "double: ";
    if ( _r[0] == '-' && _aux < 0 && _aux > -1 && !_isString && _floatD)
        std::cout << "-";
    if ( forFun(_r) || (!_isString && _floatD && _aux <= FLOAT_MAX && _aux >= FLOAT_MIN))
    {
        if ( forFun(_r))
            std::cout  << static_cast<double>(_aux)- 48 << std::endl;
        else if (_r.length() == 1 && _r[0] >= '0' && _r[0] <= '9' )
            std::cout << static_cast<int>(_aux) - 48 << printDotZero(static_cast<double>(_aux) - 48) << std::endl;
        else
            std::cout << static_cast<int>(_aux) << printDotZero(static_cast<double>(_aux)) << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;
}

bool Scalar::forFun( std::string &g) {
    std::string science[6] = {"-inff", "+inff", "nanf",
                                "-inf", "+inf", "nan"};
    for(int i = 0; i < 6; i++)
    {
        if(science[i] == g)
            return true;
    }
    return (false);
}

const char	*Scalar::printDotZero( double number )
{
    int aux;
    aux = 0;
	if (number - static_cast<int>(number) == 0.0)
		return (".0");
    else if (number)
    {
        for (int i = 0; _r[i] ; i++)
        {
            if(_r[i] == '.' && aux == 0)
            {
                std::cout << ".";
                i++;
                if (i == 9)
                    aux = 0;
                else
                {
                    while(_r[i] && i < 9)
                    {
                        if (_r[i] != 'f')
                            std::cout << _r[i];
                        i++;
                        aux++;
                    }
                }
             }
            else if ((_r[i] == '.' && aux > 0))
                aux = 0;
        }
    }
	return ("");
}

void Scalar::checker( void ) {
    int te;

    te = 0;
    if((_r[0] == '.' && isdigit(_r[1])) || (isdigit(_r[0]) && _r[1] == '.'))
    {
        if(!_r[2])
        {
            _floatD = true;
            _digit = true;
        }
        for(int i = 2; _r[i]; i++)
        {
            if (!isdigit(_r[i]) && _r[i] != 'f' && !_r[i+1])
                 _isString = true;
            else
            {
                _floatD = true;
                _digit = true;
            }
        }
        te = 1;
    }
    if (!isdigit(_r[0]) && !isdigit(_r[1]) && te == 0)
        _isString = true;
}

void Scalar::callPrint( void ) {
    convToChar();
    convToInt();
    convToFloat();
    convToDouble();
}

Scalar::~Scalar( void ) {

}
