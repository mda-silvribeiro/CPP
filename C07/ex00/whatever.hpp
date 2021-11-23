/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 01:19:07 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/23 01:19:08 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T  >

void swap(T &a, T &b) {
    T aux;

    aux = a;
    a = b;
    b = aux;
}

template< typename T  >

T min( T const &a, T const &b) {
    return (a >= b ? b : a);
}

template< typename T  >

T max( T const &a, T const &b) {
    return  ( b >= a ? b : a);
}

#endif