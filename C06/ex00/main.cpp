#include "Scalar.hpp"

int main( int ac, char **av)
{
    std::string a = av[1];
    if ( ac != 2)
        std::cout << "Error: cannot use more than 1 argument" << std::endl;
    else
    {
        std::cout << av[1] << std::endl;
        Scalar b(a);
        b.convToChar();
        //a.convToInt();
        //a.convToFloat();
        //a.convToDouble();
    }
    return (0);
}