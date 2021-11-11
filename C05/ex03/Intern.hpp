/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:59:45 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 17:59:47 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern( void );
        Intern( const Intern & src);
        ~Intern( void );

        Intern &operator=(const Intern & cmp);

        Form    *makeForm(const std::string form, const std::string target) const ;

        typedef struct f
        {
            const std::string req;
            Form *type;
        }               t_f;
};

#endif