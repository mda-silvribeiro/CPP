/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:33:59 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:17:41 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        const int _gradeSign;
        const int _gradeReq;
        bool _signed;
    public:
        Form( void );
        Form( const Form & src);
        Form( const std::string n, const int gSign, const int gReq);
        virtual ~Form( void );
        Form & operator=( const Form & cmp);
        const std::string &getName( void ) const;
        bool    isSigned( void ) const;
        int getGradeSign( void ) const;
        int getGradeReq( void ) const;
        void comp( void );
        void beSigned( const Bureaucrat &i);
        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ( "The grade is too high");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ( "The grade is too low");
                }
        };
 
        class CannotExecForm : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ( "The Form wasn't signed");
                }
        };

};

std::ostream & operator<<( std::ostream & o, const Form &i );

#endif
