/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:29:46 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:29:47 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
                std::string _t;
    public:
                AMateria(std::string const & type);
                virtual ~AMateria( ) {}
                const std::string & getType() const; //Returns the materia type
                virtual AMateria* clone() const = 0;
                virtual void use(ICharacter & target) = 0;
};

#endif
