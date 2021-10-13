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
    
    private:
        void info( void );
        void warning( void );
        void error(void );
        void debug( void );
};


#endif