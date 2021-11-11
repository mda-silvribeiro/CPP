/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:20:43 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:20:47 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* ideas;
    public:
        Dog( void );
        Dog( const Dog &src);
        virtual ~Dog( void );
        void makeSound() const;
        virtual Brain *getBrain( void ) const;
        Dog	&operator=( Dog const &cmp );
};

#endif
