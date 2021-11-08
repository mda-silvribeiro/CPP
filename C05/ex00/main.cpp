#include "Bureaucraft.hpp"

int main ( )
{
    try
    {
        Bureaucraft a = Bureaucraft("x", 100);
        a.incGrade();
        std::cout << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n" << std::endl;
    }

    try
    {
        Bureaucraft b = Bureaucraft( "x", 150);
        b.decGrade();
        std::cout << b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n" << std::endl;
    }

    try
    {
        Bureaucraft c = Bureaucraft("x", 1);
        c.incGrade();
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << "\n" << std::endl;
    }

    try
    {
        Bureaucraft d = Bureaucraft("x", 0);
        d.incGrade();
        std::cout << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }


    
}