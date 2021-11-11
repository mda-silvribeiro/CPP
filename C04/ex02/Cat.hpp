/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:25:08 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:25:10 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain* ideas;
    public:
        Cat( void );
        Cat( const Cat &src );
        virtual ~Cat( void );
        void makeSound(void) const;
        virtual Brain *getBrain( void ) const;
        virtual Cat	&operator=( Cat const &cmp );
        virtual AAnimal	&operator=( AAnimal const &rhs );
};

#endif
