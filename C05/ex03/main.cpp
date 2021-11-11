/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:17 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 17:58:23 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main ( void )
{
    Intern k;
    Form* a;
    Bureaucrat x("Test", 1);
    
    std::cout << "\n\033[32m" << std::endl;
    a = k.makeForm("horas", "Lucas");
    if (!a)
        delete (a);
    std::cout << "\033[0m\n\033[33m" << std::endl;
    a = k.makeForm("presidencial pardon", "Lucas");
    if (!a)
        delete (a);
    else
    {
        a->beSigned(x);
        a->execute(x);
    }
    delete (a);
    
    std::cout << "\033[0m\n\033[31m" << std::endl;
    a = k.makeForm("robotomy request", "Lucas");
    if (!a)
        delete (a);
    else
    {
        a->beSigned(x);
        a->execute(x);
    }
    std::cout << "\033[0m" << std::endl;
    delete (a);
    
    std::cout << "\033[0m\n\033[35m" << std::endl;
    a = k.makeForm("shrubbery creation", "Lucas");
    if (!a)
        delete (a);
    else
    {
        a->beSigned(x);
        a->execute(x);
    }
    std::cout << "\033[0m" << std::endl;
    return (0);
}
