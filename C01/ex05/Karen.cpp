#include "Karen.hpp"

Karen::Karen( void )
{
    return ;
}

Karen::~Karen( void )
{
    return ;
}

void Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my\n\
7XL-double-cheese-triple-pickle-special-ketchup burger.\n\
I just love it!\n" << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost\n\
more money. You don’t put enough! If you did I would not\n\
have to ask for it!\n" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free.\n\
I’ve been coming here for years and you just started working here\n\
last month.\n" << std::endl;
}

void Karen::error(void )
{
    std::cout << "This is unacceptable, I want to speak to the\n\
manager now.\n" << std::endl;
}

void Karen::complain( std::string level )
{
    int i;
    
    i = -1;
    void (Karen :: *ptr1_f[])(void) = { 
        &Karen :: debug,  &Karen :: info,
        &Karen :: warning, &Karen :: error
    };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while(levels[++i].compare(level) != 0)
        continue ;
    (this->*ptr1_f[i])();
}