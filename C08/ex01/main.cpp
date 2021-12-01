/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:23:49 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/29 21:23:50 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main( void ) {
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    std::cout << "######### Second test #########" << std::endl;

    Span sp1 = Span(10);
    srand(time(0));
    sp1.addNumber(21);
    sp1.addNumberPlus();
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;

    std::cout << "######### thrid test ########"<< std::endl;
    try {
        sp.addNumber(50);
        sp.display();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try {
        sp.addNumberPlus();
        sp.display();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    Span sp2;

    try {
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    return(0);
}