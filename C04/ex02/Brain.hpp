/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:24:51 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/08 12:24:53 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain( void );
        Brain(const Brain &src);
        ~Brain( void );
        Brain	&operator=( const Brain & cmp);
        std::string ideas[100];
};

#endif
