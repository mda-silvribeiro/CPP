/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:30:19 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:30:20 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure( void );
        Cure( const Cure & src);
        ~Cure( void );
        Cure &operator=(Cure const & cmp);
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};

#endif
