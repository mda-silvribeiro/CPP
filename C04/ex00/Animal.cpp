/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:16:48 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:16:50 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
    std::cout << "Animal Default Constructor called" << std::endl;
};

Animal::Animal( const Animal& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

const std::string &Animal::getType( void ) const{
    return (this->type);
}

void Animal::setType( std::string s) {
    this->type = s;
}

Animal &	Animal::operator=( Animal const & cmp ) {
    type = cmp.getType();
    std::cout << "Assignement operator for Animal called" << std::endl;
    return (*this);
}

void Animal::makeSound( void ) const {
    std::cout << "uhuuuuuuu" << std::endl;
}

Animal::~Animal( void ) {
    std::cout << "Destructor called" << std::endl;
    return ;
};
