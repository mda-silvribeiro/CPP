/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:17:04 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:17:07 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Cat default Constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat( const Cat &src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat( void ) {
    std::cout << "Destructor called" << std::endl;
}

void Cat::makeSound( void ) const{
    std::cout << "Meeeeeowwwww" << std::endl;
}
