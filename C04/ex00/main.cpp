/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:17:39 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:17:44 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    const WrongAnimal* x = new WrongAnimal();
    const WrongAnimal* z = new WrongCat();

    std::cout << x->getType() << " " << std::endl;
    std::cout << z->getType() << " " << std::endl;
    x->makeSound();
    z->makeSound();

    delete x;
    delete z;

    return (0);
}
