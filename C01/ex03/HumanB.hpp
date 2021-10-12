/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:20:54 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:20:56 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    
    public:
        HumanB(std::string name);
        ~HumanB( void );
        void setWeapon( Weapon& weapon );
        void attack( void );

    private:
        std::string _name;
        Weapon* _weapon;
};

#endif
