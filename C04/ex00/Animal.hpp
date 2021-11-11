/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:16:56 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:16:58 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal( void );
        Animal( const Animal& src);
        virtual ~Animal( void );
        Animal& operator=( const Animal &cmp );
        virtual void makeSound( void ) const;
        const std::string &getType( void ) const;
        void setType( std::string s);
};

#endif
