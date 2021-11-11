/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:28:29 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:28:30 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
    private:
        const std::string _target;
    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( std::string t);
        PresidentialPardonForm( const PresidentialPardonForm & src);
        ~PresidentialPardonForm( void );
        const std::string &getTarget( void ) const;
        PresidentialPardonForm & operator=( const PresidentialPardonForm & cmp);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif