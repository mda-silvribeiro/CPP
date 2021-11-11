/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:45:22 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 13:17:10 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(  ) :
    Form("RobotomyRequestForm", 72, 45),  _target("default") {
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string t) :
    Form("RobotomyRequestForm", 72, 45), _target(t) {
    std::cout << "RobotomyRequestForm Named constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src) :
    Form("RobotomyRequestForm", 72, 45), _target(src._target) {
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
    *this = src;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

const std::string &RobotomyRequestForm::getTarget( void ) const {
    return (this->_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & cmp) {
    cmp.getTarget();
    std::cout << "cannot copy a const" << std::endl;
    std::cout << "RobotomyRequestForm Assigment operator called" << std::endl;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    srand(time(0)); //Use current time as seed for random generator
    if (rand() % 2 == 0)
    {
        std::cout << "Shhhhhhhhhhh......" << this->_target
            << " has been robomized successfully" << std::endl;
    }
    else
    {
        std::cout << executor.getName() << " Robotomization on " << this->_target
            << " was been utter failure" << std::endl;
    }
}