/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:17:49 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:17:52 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *n1 = newZombie("Georges");
    Zombie *n2 = newZombie("Tom");

    n1->announce();
    delete n1;
    n2->announce();
    delete n2;
    randomChump("Nio");  
}
