#include "Scalar.hpp"

int main( int ac, char **av)
{
    if ( ac != 2)
        std::cout << "Error: Mandatory an argument" << std::endl;
    else
    {
        std::string a = av[1];
        Scalar b(a);
    }
    return (0);
}