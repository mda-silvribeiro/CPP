/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:23:07 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/13 15:23:10 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void )
{
    void (Karen :: *ptr1_f) (std::string) = &Karen :: complain;

    Karen ob;
    (ob.*ptr1_f)("INFO");
    (ob.*ptr1_f)("WARNING");
    (ob.*ptr1_f)("ERROR");
    (ob.*ptr1_f)("DEBUG");
}
