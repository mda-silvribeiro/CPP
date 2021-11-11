/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:14:41 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:14:43 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap{

    public:
        FragTrap( void );
        FragTrap(std::string s);
        FragTrap(const FragTrap & src );
        FragTrap& operator=(const FragTrap& comp );
        ~FragTrap( void );
        void  highFivesGuys( void );
};

#endif
