/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:24:03 by mda-silv          #+#    #+#             */
/*   Updated: 2021/10/13 15:24:06 by mda-silv         ###   ########.fr       */
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
        void karenFilter(int i);
    
    private:
        void info( void );
        void warning( void );
        void error(void );
        void debug( void );
};


#endif
