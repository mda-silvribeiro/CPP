/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:17 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:40:47 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( void )
{
    try
    {
        Form x("Mda", 70, 90);
        std::cout << x << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Form y("Form", 0, 1);
        std::cout << y << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Form z("Silv", 151, 0);
        std::cout << z << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat b = Bureaucrat("Rjx", 150);
        Form a("Flx", 1, 1);
        std::cout << b << std::endl;
        std::cout << a << std::endl;
        b.signForm(a);
        std::cout << b << std::endl;
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat b = Bureaucrat("Mda", 151);
        Form a("Xlm", 1, 1);
        std::cout << b << std::endl;
        std::cout << a << std::endl;
        b.signForm(a);
        std::cout << b << std::endl;
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return (0);
}
