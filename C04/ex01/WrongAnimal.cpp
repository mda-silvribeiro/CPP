/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrogAnimal.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:18:01 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:18:05 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
    type = "WrongAnimal";
    std::cout << "Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &cmp ) {
    type = cmp.type;
    return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "Destructor called" << std::endl;
}

const std::string &WrongAnimal::getType( void ) const{
    return (type);
}

void WrongAnimal::makeSound( void ) const{
    std::cout << "Quack, Quack, Quack..." << std::endl;
}
