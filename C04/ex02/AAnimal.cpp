/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:24:20 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:24:23 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

const std::string &AAnimal::getType( void ) const{
    return (this->type);
}

AAnimal::~AAnimal( void ) {
    std::cout << "AAnimal Destructor called" << std::endl;
    return ;
};
