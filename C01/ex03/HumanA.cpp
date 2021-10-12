/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:19:46 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:20:32 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    
};

HumanA::~HumanA( void )
{

};

void    HumanA::attack()
{
    std::cout << this->_name << " attacs with his " 
            << this->_weapon.getType() << std::endl;

};
