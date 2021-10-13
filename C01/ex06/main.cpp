/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:24:16 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/13 15:24:18 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( int ac, char **av)
{
    Karen ob;
    if (ac != 2)
    {
        std::cout << "\033[1;31m\033[1;43minvalid arguments\033[0;" << std::endl;
        return (1);
    }
    void (Karen :: *ptr1_f) (std::string) = &Karen :: complain;
    (ob.*ptr1_f)(av[1]);
    return (0);
}
