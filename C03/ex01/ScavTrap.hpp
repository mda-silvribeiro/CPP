/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:11:39 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:11:41 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    public:
        ScavTrap( void );
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & src);
        ScavTrap& operator=(const ScavTrap & src);
        ~ScavTrap( void );
        void guardGate();
};

#endif
