/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:18:46 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:18:48 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal( const WrongAnimal &src);
        virtual ~WrongAnimal( void );
        WrongAnimal& operator=( const WrongAnimal &cmp );
        const std::string& getType( void ) const ;
        virtual void makeSound( void ) const;
};

#endif
