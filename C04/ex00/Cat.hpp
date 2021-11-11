/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:17:12 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:17:14 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    
    public:
        Cat( void );
        Cat( const Cat &src );
        virtual ~Cat( void );
        void makeSound(void) const;
};

#endif
