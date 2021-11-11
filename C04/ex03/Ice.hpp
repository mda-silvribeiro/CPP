/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:30:55 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:30:57 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice( void );
        Ice( const Ice & src);
        ~Ice( void );
        Ice &operator=(Ice const & cmp);
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};

#endif
