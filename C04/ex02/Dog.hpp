/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:25:23 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:25:25 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
    private:
        Brain* ideas;
    public:
        Dog( void );
        Dog( const Dog &src);
        virtual ~Dog( void );
        void makeSound() const;
        virtual Brain *getBrain( void ) const;
        virtual Dog	&operator=( Dog const &cmp );
        virtual AAnimal	&operator=( AAnimal const &cmp );
};

#endif
