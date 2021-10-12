/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:56:49 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/12 17:56:53 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	if ( ac != 4)
		std::cout << "\033[1;33m\033[1;41merror: invalid numbers of arguments"
		<< std::endl;
	else
		Replace aux(av[1], av[2], av[3]);
	return (0);
}
