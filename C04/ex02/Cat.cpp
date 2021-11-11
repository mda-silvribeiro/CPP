/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:25:00 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:25:03 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
    std::cout << "Cat default Constructor called" << std::endl;
    type = "Cat";
    ideas = new Brain();
}

Cat::Cat( const Cat &src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat( void ) {
    std::cout << "Destructor called" << std::endl;
    delete ideas;
}

void Cat::makeSound( void ) const{
    std::cout << "Meeeeeowwwww" << std::endl;
}

Brain *Cat::getBrain( void ) const {
    return (ideas);
}

Cat	&Cat::operator=( Cat const &cmp)
{
	std::cout << "Cat Assignement operator called" << std::endl;
	type = cmp.getType();
    ideas = new Brain;
	*(this->ideas) = *(cmp.getBrain());
	return (*this);
}

AAnimal	&Cat::operator=( AAnimal const &cmp )
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	this->type = cmp.getType();
    ideas = new Brain;
	*(this->ideas) = *(cmp.getBrain());
	return *this;
}
