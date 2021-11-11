/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:33:51 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:36:54 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAFT_HPP
# define BUREAUCRAFT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat( void );
        Bureaucrat(const std::string &n, int g);
        Bureaucrat( const Bureaucrat & src);
        ~Bureaucrat( void );
        void cmp( void );
        Bureaucrat & operator=( Bureaucrat const & cmp);
        const std::string &getName( void ) const;
        int getGrade( void ) const ;
        void incGrade( void );
        void decGrade( void );
        void signForm( Form &form ) const;
        void executeForm(Form const & form);
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return( "The grade is too high");
                }
        };

        class GradeTooLowExpection : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return( "The grade is too low");
                }
        };
};

std::ostream & operator<<( std::ostream & o, const Bureaucrat & i );

#endif
