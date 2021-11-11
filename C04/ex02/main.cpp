/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:26:37 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:26:39 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    AAnimal* j[10];
    Brain* b[10];
    int a = 0;

    for(int i = 0; i < 5; i++)
    {
        j[i]  = new Dog();
        b[i] = j[i]->getBrain();
        b[i]->ideas[0] = " I want to walk.";
        b[i]->ideas[1] = " I want to eat.";
        b[i]->ideas[2] = " I go to sleep.";
    }
    for(int i = 5; i < 10; i++)
    {
        j[i] = new Cat();
        b[i] = j[i]->getBrain();
        b[i]->ideas[0] = " I want to walk.";
        b[i]->ideas[1] = " I want to eat.";
        b[i]->ideas[2] = " I go to sleep.";
    }
    for(int i = 0; i < 10; i++)
    {
        j[i]->makeSound();
        std::cout << j[i]->getBrain()->ideas[a] << std::endl;
        ++a;
        if (a > 2)
            a = 0;
    }

    for(int i = 0; i < 10; i++)
        delete j[i];

    std::cout<< "\nTESTE Deep Copy" << std::endl;
    Cat x;
    {
      Cat z = x;
    }

  
    return (0);
}
