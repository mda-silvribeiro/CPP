#ifndef BUREAUCRAFT_HPP
# define BUREAUCRAFT_HPP

#include <iostream>
#include <ostream>
#include <stdexcept>

class Bureaucraft
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucraft( void );
        Bureaucraft(const std::string &n, int g);
        Bureaucraft( const Bureaucraft & src);
        ~Bureaucraft( void );
        void cmp( void );
        Bureaucraft & operator=( Bureaucraft const & cmp);
        const std::string &getName( void ) const;
        int getGrade( void ) const ;
        void incGrade( void );
        void decGrade( void );
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return( "The grade is too high");
                }
        };

        class GradeTooLowExpection : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return( "The grade is too low");
                }
        };
};

std::ostream & operator<<( std::ostream & o, const Bureaucraft & i );

#endif