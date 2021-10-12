/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:18:51 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:18:53 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie *zombieHorde(int N, std::string name);

int main(void)
{
    int i;

    i = 0;
    Zombie *zo;
    zo = zombieHorde(100, "Hus");
    while(i < 100) {
        zo[i++].announce();
    }
    delete [] zo;
    return (0);
}
