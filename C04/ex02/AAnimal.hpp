/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:24:33 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:24:37 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal {
    protected:
        std::string type;
    public:
        virtual ~AAnimal( void );
        virtual AAnimal &operator=( const AAnimal &cmp ) = 0;
        virtual void makeSound( void ) const = 0;
        const std::string &getType( void ) const;
        virtual Brain    *getBrain( void ) const = 0;
};

#endif
