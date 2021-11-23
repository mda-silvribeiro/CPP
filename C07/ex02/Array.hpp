/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:58:11 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/23 02:58:12 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T = int >

class Array {
    private:
        int _len;
        T *_array;

    public:
        Array< T >(  void ) : _len(0), _array(NULL) { }

        Array< T >( unsigned int n ) : _len(n) {
            if(n <= 0)
            { 
                _array = NULL;
                return;
            } 
            _array = new T[n]; 
        }

        Array< T >(Array const &src) {
            *this = src;
        }

        ~Array< T >( void ) {
            if (this->_len > 0)
                delete[] this->_array;
        }

        Array< T >&operator=(Array const &cmp) {
            if (this->_len > 0)
                delete[] this->_array;
            this->_len = cmp._len;
            _array = new T[this->_len];
            for(int i = 0; i < _len; i++)
                _array[i] = cmp[i];
            return (*this);
        }

        T   &operator[]( int i ) const {
            if ( i < 0 || i >= this->_len)
                throw std::exception();
            return this->_array[i];

        }

        int size( void ) const {
            return _len;
        }

};

#endif