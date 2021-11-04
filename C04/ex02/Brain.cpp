#include "Brain.hpp"

Brain::Brain( void) {
    std::cout << "Default Brain constructor called" << std::endl;

}

Brain::Brain(const Brain &src) {
    *this = src;
    std::cout << "Brain Copy constructor called" << std::endl;
}

Brain	& Brain::operator=( Brain const & cmp) {
    for(int i = 0; i < 100; i++)
        this->ideas[i] = cmp.ideas[i];
    std::cout << "Assignement Brain operator called" << std::endl;
    return (*this);
}


Brain::~Brain( void ) {
    std::cout << "Brain Destructor called" << std::endl;
}