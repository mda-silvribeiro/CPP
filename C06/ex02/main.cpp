/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:49:43 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/21 21:56:44 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate( void ) {
    int aux = rand() % 3;
    if(aux == 0)
        return new A();
    else if (aux == 1)
        return new B();
    else if (aux == 2)
        return new C();
    throw new std::exception();
}

void identify(Base *p) {
    if(!p)
        return ;
    if(dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        return ;
}

void identify(Base &p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception &err)
    {
        (void)err;
    }

    try {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception &err)
    {
        (void)err;
    }

    try {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception &err)
    {
        (void)err;
    }
}

int main ( void ) {
    Base *base;
    srand(time(0));
    for(int i = 0; i < 5; i++)
    {
        base = generate();
        identify(base);
        delete base;
    }
    std::cout << "\n\n" << std::endl;
    for(int i = 0; i < 5; i++)
    {
        base = generate();
        identify(*base);
        delete base;
    }
}