#include <iostream>

void ft_megaphone(char a)
{
    if (a > 96 && a < 123)
        a -= 32;
    std::cout << a;
}

int main( int ac, char **av)
{
    int i, j;

    j = 0;
    if ( ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        while (av[++j])
        {
            i = 0;
            while (av[j][i])
                ft_megaphone(av[j][i++]);
        }
        std::cout << std::endl;
    }
    return 0;
}