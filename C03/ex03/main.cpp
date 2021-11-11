/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:15:58 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:16:00 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap hus;
    DiamondTrap xxx("p2");
    DiamondTrap myself("p4");
    DiamondTrap p3(xxx);

    hus.attack("p2");
    xxx.takeDamage(20);
    xxx.beRepaired(3);

    p3.attack("p4");
    myself.takeDamage(51);

    xxx.attack("default");
    hus.takeDamage(20);
    hus.beRepaired(3);
    hus.whoAmI();
    xxx.whoAmI();
    myself.whoAmI();

    return (0);
}
