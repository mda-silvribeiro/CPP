/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:10:46 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:10:48 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap hus;
    ClapTrap xxx("p2");
    ClapTrap Myself("p4");
    ClapTrap p3(xxx);

    hus.attack("p2");
    xxx.takeDamage(4);
    xxx.beRepaired(3);

    p3.attack("p4");
    Myself.takeDamage(11);

    xxx.attack("default");
    hus.takeDamage(9);
    hus.beRepaired(3);

    return (0);
}
