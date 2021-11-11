/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:20:29 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:20:31 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* ideas;
    public:
        Cat( void );
        Cat( const Cat &src );
        virtual ~Cat( void );
        void makeSound(void) const;
        virtual Brain *getBrain( void ) const;
        virtual Cat	&operator=( Cat const &rhs );
};

#endif
