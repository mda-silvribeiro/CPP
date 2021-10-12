/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:20:45 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:20:47 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) 
{

};

HumanB::~HumanB( void ) {

};

void HumanB::setWeapon( Weapon& weapon )
{
    _weapon = &weapon;
};

void HumanB::attack( void )
{
    std::cout << this->_name << " attacks with his " 
            << _weapon->getType() << std::endl;
};
