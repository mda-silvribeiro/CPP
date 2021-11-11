/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:19:59 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:20:00 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string type;
    public:
        Animal( void );
        Animal( const Animal& src);
        virtual ~Animal( void );
        virtual Animal& operator=( const Animal &cmp );
        virtual void makeSound( void ) const;
        const std::string &getType( void ) const;
        void setType( std::string s);
        virtual Brain    *getBrain( void ) const = 0;
};

#endif
