/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:00:57 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/23 02:00:58 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T >

void outPut(T const & a) {
    std::cout << a << std::endl; 
}

int main() {
    int a[] = { 42, 21, 4, 2, 1, 0 };
    std::string b[] = {"hello", "world", "how", "are", "you"};
    float c[] = { 1.1f, 20.345f, 500.1f, 42.21f};

    iter( a, 6, outPut); 
    iter( b, 5, outPut);
    iter( c, 4, outPut);

    return 0;
}