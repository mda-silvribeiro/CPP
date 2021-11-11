/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:14:28 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:14:30 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;
    public:
        DiamondTrap( void );
        DiamondTrap( std::string s );
        DiamondTrap( const DiamondTrap & src);
        ~DiamondTrap( void );
        DiamondTrap& operator=(const DiamondTrap& cmp);
        void attack(std::string const & target);
        void whoAmI();

};

#endif
