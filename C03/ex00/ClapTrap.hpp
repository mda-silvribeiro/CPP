/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:10:33 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:10:34 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string _Name;
        int _Hitpoints;
        int _Energy_points;
        int _Attack_damage;
    public:
        ClapTrap( void );
        ClapTrap(std::string x);
        ClapTrap( const ClapTrap & src);
        ClapTrap& operator=(const ClapTrap& comp);
        ~ClapTrap( void );
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
