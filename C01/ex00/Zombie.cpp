/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:17:28 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:17:35 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ) {

    std::cout << Zombie::_name << " BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::Zombie( std::string name ) : _name(name) {
};

Zombie::~Zombie( void ) {
    std::cout << Zombie::_name << " is dead " << std::endl;
};

