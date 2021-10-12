/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:17:40 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:17:45 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    
public:
    void announce( void );
    Zombie( std::string name );
    ~Zombie( void );

private:
    std::string _name;

};

Zombie* newZombie( std::string name);
void randomChump( std::string name );

#endif
