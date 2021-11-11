/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:33:09 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:41:42 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ( )
{
    try
    {
        Bureaucrat a = Bureaucrat("x", 100);
        a.incGrade();
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n" << std::endl;
    }

    try
    {
        Bureaucrat b = Bureaucrat( "x", 150);
        b.decGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n" << std::endl;
    }

    try
    {
        Bureaucrat c = Bureaucrat("x", 1);
        c.incGrade();
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n" << std::endl;
    }

    try
    {
        Bureaucrat d = Bureaucrat("x", 0);
        d.incGrade();
        std::cout << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }


    
}
