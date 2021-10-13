/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:23:50 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/13 15:23:52 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
    return ;
}

Karen::~Karen( void )
{
    return ;
}

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]"<< std::endl;
    std::cout << "I love to get extra bacon for my\n\
7XL-double-cheese-triple-pickle-special-ketchup burger. \
I just love it!\n" << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]"<< std::endl;
    std::cout << "I cannot believe adding extra bacon cost \
more money.\n You don’t put enough! If you did I would not \
have to ask for it!\n" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]"<< std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n\
I’ve been coming here for years and you just started working here \
last month.\n" << std::endl;
}

void Karen::error(void )
{
    std::cout << "[ ERROR ]"<< std::endl;
    std::cout << "This is unacceptable, I want to speak to the\
manager now.\n" << std::endl;
}

void Karen::karenFilter(int i)
{
   switch( i ) {
       case 0:
            debug();
            info();
            warning();
            error();
            break;
        case 1:
            info();
            warning();
            error();
            break;
        case 2:
            warning();
            error();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
   } 
}

void Karen::complain( std::string level )
{
    int i;
    
    i = -1;
    void (Karen :: *ptr1_f[])(void) = { 
        &Karen :: debug,  &Karen :: info,
        &Karen :: warning, &Karen :: error
    };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(levels[++i].compare(level) != 0 && i < 4)
        continue ;
    karenFilter(i);
}
