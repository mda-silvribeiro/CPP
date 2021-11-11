/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:34:04 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:22:06 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name(""), _gradeSign(1), _gradeReq(150), _signed(false){
    std::cout << "Form Default constructor called." << std::endl;
    return ;
};

Form::Form( const std::string n, const int gSign, const int gReq) :
        _name(n), _gradeSign(gSign), _gradeReq(gReq), _signed(false) {
    comp();
    std::cout << "Form Named constructor called." << std::endl;
    return ;
};

Form::Form( Form const & src) : _name(src.getName()), _gradeSign(src.getGradeSign()),
        _gradeReq(src.getGradeReq()), _signed(isSigned()) {
    std::cout << "Form Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Form::~Form( void ) {
    std::cout << "Form Destructor called" << std::endl;
}

Form & Form::operator=( const Form & cmp) {
    this->_signed = cmp._signed;
    std::cout << "Form Assigment operator called" << std::endl;
    return(*this);
}

bool    Form::isSigned( void ) const {
    return (this->_signed);
}

const std::string &Form::getName( void ) const {
    return( this->_name);
}

int Form::getGradeSign( void ) const {
    return(this->_gradeSign);
}

int Form::getGradeReq( void ) const {
    return(this->_gradeReq);
}

void Form::comp( void ) {
    if (this->_gradeSign < 0 || this->_gradeReq < 0)
        throw Form::GradeTooHighException( );
    if (this->_gradeSign > 150 || this->_gradeReq > 150)
        throw Form::GradeTooLowException( );
}

void Form::beSigned( const Bureaucrat &i) {
    if (i.getGrade() <= this->_gradeSign)
        this->_signed = true;
    else
        throw Form::GradeTooLowException( );
}

void Form::execute(Bureaucrat const & executor) const {
    
    if (!(_signed))
    {
        throw Form::CannotExecForm();
    }
    else if (executor.getGrade() > _gradeReq)
    {
        throw Form::GradeTooLowException();
    }
}

std::ostream& operator<<( std::ostream & o, Form const & i ) {
    o << i.getName() << ((i.isSigned()) ? " is signed, " :
        " isn't signed, ") << "it's signable at grade : "
        << i.getGradeSign() << " and executable at grade : " 
        << i.getGradeReq();
	return (o);
}