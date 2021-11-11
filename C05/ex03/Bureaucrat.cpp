/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:33:45 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 13:38:25 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(150)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &n, int g) : _name(n), _grade(g) {
    cmp();
    std::cout << "Bureaucrat Named constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src) {
    *this = src;
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat( void ) {
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & cmp) {
    this->_grade = cmp._grade;
    std::cout << "Bureaucrat Assignement operator called" << std::endl;
    return (*this);
}

const std::string &Bureaucrat::getName( void ) const {
    return (this->_name);
}

int Bureaucrat::getGrade( void ) const {
    return (this->_grade);
}

void Bureaucrat::incGrade( void ) {
    std::cout << "Bureaucrat Increment Grade called." << std::endl;
    --this->_grade;
    if (this->_grade < 1)
        cmp();
}

void Bureaucrat::decGrade( void ) {
    std::cout << "Bureaucrat Decrement Grade called." << std::endl;
    ++this->_grade;
    if (this->_grade > 150)
        cmp();
}

void Bureaucrat::signForm( Form &form ) const {
    if(form.isSigned())
    {
        std::cout << "It is already signed, you cannot sign again." << std::endl;
    }
    else
    {
        
        try
        {
            form.beSigned(*this);
            std::cout << this->_name << " signs " << form.getName() << std::endl;
        }
        catch ( std::exception & e)
        {
            std::cout << this->_name << " cannot sign " << form.getName()
                << " because " << e.what() << std::endl;
        }
     }
}

void Bureaucrat::cmp( void ) {
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
       throw Bureaucrat::GradeTooLowExpection();
}

void Bureaucrat::executeForm(Form const & form) {
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " cannot execute " << form.getName()
            << " " <<  e.what() << std::endl;
    }
    
}
std::ostream & operator<<( std::ostream & o, Bureaucrat const & i )
{
    o<< i.getName() << ", Bureaucrat grade " << i.getGrade();
    return o;
}
