/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:22:47 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/13 15:22:49 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
    public:
        ~Karen( void );
        Karen( void );
        void complain( std::string level );
    
    private:
        void info( void );
        void warning( void );
        void error(void );
        void debug( void );
};


#endif
