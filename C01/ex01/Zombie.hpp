/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:18:37 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/11 10:18:39 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{  
    public:
        Zombie( std::string name );
        Zombie(void);
        ~Zombie( void );
        void announce( void );
        void setName(std::string name);
    private:
        std::string _name;
};
Zombie* newZombie( std::string name);
Zombie *zombieHorde(int N, std::string name);


#endif