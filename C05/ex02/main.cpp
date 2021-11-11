/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:17 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:44:00 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int main ( void )
{
    PresidentialPardonForm a("Defendant_Marcos");
    ShrubberyCreationForm b("Defendant_Julia");
    RobotomyRequestForm c("Defendant_John");
    
    std::cout << "\n\033[32m" << std::endl;
    try
    {
        Bureaucrat x("Ribeiro", 1);
        x.executeForm(a);
        x.executeForm(b);
        x.executeForm(c);
        
        x.signForm(a);
        x.signForm(a);
        x.signForm(b);
        x.signForm(c);
        
        x.executeForm(a);
        x.executeForm(b);   
        x.executeForm(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\033[0m\n\033[33m" << std::endl;
    try
    {
        Bureaucrat y("Sfx", 150);
        y.executeForm(a);
        y.executeForm(b);
    
        y.signForm(a);
        y.signForm(b);
        y.signForm(b);
    
        y.executeForm(a);
        y.executeForm(b);   
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\033[0m\n\033[34m" << std::endl;
    try
    {
        Bureaucrat z("Sfml", 20);
        z.executeForm(a);
        z.executeForm(b);
    
        z.signForm(a);
        z.signForm(b);
        z.signForm(b);
    
        z.executeForm(a);
        z.executeForm(b);   
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\033[0m\n\033[31m" << std::endl;
    
    try
    {
        Bureaucrat j("Ribeiro", 0);
        j.executeForm(a);
        j.executeForm(b);
    
        j.signForm(a);
        j.signForm(b);
        j.signForm(b);
    
        j.executeForm(b);
        j.executeForm(a);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\033[0m" << std::endl;
}
