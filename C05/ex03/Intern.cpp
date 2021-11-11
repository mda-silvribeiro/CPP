/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:59:26 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 17:59:27 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern( const Intern & src )
{
    std::cout << "Intern Copy constuctor called" << std::endl;
    *this = src;
}

Intern::~Intern( void )
{ 
    std::cout << "Intern Destructor called" << std::endl;
}

Intern &Intern::operator=( Intern const & cmp)
{
    (void)cmp;
    std::cout << "Intern Assigbenent operator called";
    return *this;
}

Form   *Intern::makeForm(const std::string form, const std::string target) const 
{
    t_f f1[] = {{"robotomy request", new RobotomyRequestForm(target)},
                        {"presidencial pardon", new PresidentialPardonForm(target)},
                        {"shrubbery creation", new ShrubberyCreationForm(target)},
                        {"", NULL} };
    for( int i = 0; i <= 2; i++)
    {
        if (f1[i].req == form)
        {
            std::cout << "Intern Creates " << f1[i].req << std::endl;
            return (f1[i].type);
        }
        delete f1[i].type;
    }
    std::cout << "Intern didn't found the form with the name " << form << std::endl;
    return (NULL);
}