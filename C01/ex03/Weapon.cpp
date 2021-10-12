/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:21:13 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:21:16 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->setType(type);
}

Weapon::~Weapon( void ) 
{

}

const std::string& Weapon::getType( void )
{
    return (_type);

};

void Weapon::setType(  std::string type )
{
    _type = type;
};
