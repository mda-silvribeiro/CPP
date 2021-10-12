/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:21:22 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:21:24 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
class Weapon
{
    public:
        const std::string& getType( void );
        void setType(std::string type);
        Weapon( std::string type );
        ~Weapon( void );
    private:
        std::string _type;
};

#endif
