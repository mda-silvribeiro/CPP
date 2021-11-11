/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:13:43 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:13:45 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap hus;
    FragTrap xxx("p2");
    FragTrap Myself("p4");
    FragTrap p3(xxx);

    hus.attack("p2");
    xxx.takeDamage(20);
    xxx.beRepaired(3);

    p3.attack("p4");
    Myself.takeDamage(51);

    xxx.attack("default");
    hus.takeDamage(20);
    hus.beRepaired(3);

    return (0);
}
