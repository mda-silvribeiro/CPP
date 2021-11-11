/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:14:20 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:14:22 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
    _name = "default";
    ClapTrap::_Name = _name + "_clap_name";
    _Hitpoints = FragTrap::_Hitpoints;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = ScavTrap::_Attack_damage;
    std::cout << "Initialling default" << std::endl;
    return;
}

DiamondTrap::DiamondTrap( const std::string s ) {
    _name = s;
    ClapTrap::_Name = _name + "_clap_name";
    _Hitpoints = FragTrap::_Hitpoints;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = ScavTrap::_Attack_damage;
    std::cout << "Name created !" << std::endl;
    return;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src) {
    *this = src;
   std::cout << "DiamondTrap Copied" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & cmp) {
    ClapTrap::_Name = cmp._name + "_clap_name";
    _Hitpoints = cmp.FragTrap::_Hitpoints;
    _Energy_points = cmp.ScavTrap::_Energy_points;
    _Attack_damage = cmp.ScavTrap::_Attack_damage;
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

void DiamondTrap::attack(std::string const & target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << this->_name << " and clapTrap name is, " << ClapTrap::_Name <<std::endl;
}
DiamondTrap::~DiamondTrap( void ) {
    std::cout << "DiamondTrap destroyed !" << std::endl;
}
