/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:42:32 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 15:22:42 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(  ) :
    Form("PresidentialPardonForm", 25, 5) ,  _target("default") {
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string t) :
    Form("PresidentialPardonForm", 25, 5) ,  _target(t){
    std::cout << "PresidentialPardonForm Named constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src) :
    Form("PresidentialPardonForm", 25, 5), _target(src._target) {
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
    *this = src;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

const std::string &PresidentialPardonForm::getTarget( void ) const {
    return (this->_target);
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & cmp) {
    cmp.getTarget();
    std::cout << "cannot copy a const" << std::endl;
    std::cout << "PresidentialPardonForm Assigment operator called" << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}