#include "Bureaucraft.hpp"

Bureaucraft::Bureaucraft( void ) : _name(""), _grade(150)
{
    std::cout << "Bureaucraft constructor called" << std::endl;
}

Bureaucraft::Bureaucraft(const std::string &n, int g) : _name(n), _grade(g) {
    cmp();
    std::cout << "Bureaucraft Named constructor called" << std::endl;
}

Bureaucraft::Bureaucraft( const Bureaucraft & src) {
    *this = src;
    std::cout << "Bureaucraft Copy constructor called" << std::endl;
}

Bureaucraft::~Bureaucraft( void ) {
    std::cout << "Bureaucraft Destructor called" << std::endl;
}

Bureaucraft & Bureaucraft::operator=( Bureaucraft const & cmp) {
    this->_grade = cmp._grade;
    std::cout << "Bureaucraft Assignement operator called" << std::endl;
    return (*this);
}

const std::string &Bureaucraft::getName( void ) const {
    return (this->_name);
}

int Bureaucraft::getGrade( void ) const {
    return (this->_grade);
}

void Bureaucraft::incGrade( void ) {
    std::cout << "Bureaucraft Increment Grade called." << std::endl;
    if (this->_grade <= 1)
    {
        if (this->_grade == 1)
            --this->_grade;
    cmp();
    }
    else
        --this->_grade;
}

void Bureaucraft::decGrade( void ) {
    std::cout << "Bureaucraft Decrement Grade called." << std::endl;
    if (this->_grade >= 150)
    {
        if (this->_grade == 150)
            ++this->_grade;
    cmp();
    }
    else
        ++this->_grade;
}

void Bureaucraft::cmp( void ) {
    if (this->_grade < 1)
        throw Bureaucraft::GradeTooHighException();
    else if (this->_grade > 150)
       throw Bureaucraft::GradeTooLowExpection();
}

std::ostream & operator<<( std::ostream & o, Bureaucraft const & i )
{
    o<< i.getName() << ", Bureaucraft grade " << i.getGrade();
    return o;
}
