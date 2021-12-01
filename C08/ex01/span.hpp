#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
class Span{
    private:
        unsigned int N;
        std::vector<int> vec;  
    public:
        Span( void );
        Span(unsigned int v);
        Span( const Span &src);
        ~Span( void );
        Span &operator=(const Span &cmp);
        void addNumber(int n);
        void addNumberPlus( void );
        int shortestSpan( void );
        int longestSpan( void);
        void display( void );
        class BiggerThan5 : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: vector's full");
                }
        };

        class emptyVec : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error: Variable is Empty");
                }
        };
};

#endif
