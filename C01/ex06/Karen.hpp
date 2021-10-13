#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
    public:
        ~Karen( void );
        Karen( void );
        void complain( std::string level );
        void karenFilter(int i);
    
    private:
        void info( void );
        void warning( void );
        void error(void );
        void debug( void );
};


#endif