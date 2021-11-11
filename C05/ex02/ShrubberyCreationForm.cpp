/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:45:45 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/11 14:39:25 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(  ) :
    Form("ShrubberyCreationForm", 145, 137), _target("default") {
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string t) :
    Form("ShrubberyCreationForm", 145, 137), _target(t) {
    std::cout << "ShrubberyCreationForm Named constructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src) :
    Form("ShrubberyCreationForm", 145, 137), _target(src._target) {
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
    *this = src;
    return ; 
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

const std::string &ShrubberyCreationForm::getTarget( void ) const {
    return (this->_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & cmp) {
    cmp.getTarget();
    std::cout << "cannot copy a const" << std::endl;
    std::cout << "ShrubberyCreationForm Assigment operator called" << std::endl;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    std::string		fileName = this->_target + "_shrubbery";
    std::ofstream   ofs(fileName);
 
    ofs << "        ,@@@@@@@, \n"
    << "    @@@@@@@,,@@@@@@/@@,  .oo8888o. \n"
    << "  ,&&&&%&&%,@@@@@/@@@@@@,8888/88/8o  \n"
    << " ,%&%&&&%&&%,@@@/&@@@/@@@88/88888/88' \n"
    << " %&&%&%&/%&&%@@ /@@/ /@@@88888/88888' \n"
    << " %&&%/ %&&&&&@@| V /@@' `88/8 `/88'  \n"
    << " `&% `/%&'      |.|         | '|8'   \n"
    << "     |o|        | |         | |     \n"
    << "     |.|        | |         | |     \n"
    << " \\._/_/__/  ,//__\\/.    //__/_.   \n"; 
}