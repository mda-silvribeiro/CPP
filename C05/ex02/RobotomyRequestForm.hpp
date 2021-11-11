/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:28:18 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:28:19 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( std::string t);
        RobotomyRequestForm( const RobotomyRequestForm & src);
        ~RobotomyRequestForm( void );

        const std::string &getTarget( void ) const;
        RobotomyRequestForm & operator=( const RobotomyRequestForm & cmp);
        virtual void execute(Bureaucrat const & executor) const;
};

#endif