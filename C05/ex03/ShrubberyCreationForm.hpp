/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:28:09 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:28:22 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        const std::string _target;
    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string t);
        ShrubberyCreationForm( const ShrubberyCreationForm & src);
        ~ShrubberyCreationForm( void );
        
        const std::string &getTarget( void ) const;
        ShrubberyCreationForm & operator=( const ShrubberyCreationForm & cmp);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif