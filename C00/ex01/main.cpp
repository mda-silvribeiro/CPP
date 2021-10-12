#include "PhoneBook.class.hpp"

void    title()
{
    std::cout << "\033[1m\033[34m" ; 
    std::cout << "|****************PHONEBOOK******************|" << std::endl;
    std::cout << "|************ ADD, SEARCH, EXIT ************| \033[0m" << std::endl;
}

void    move(PhoneBook *book)
{
    int i;

    i = -1;
    while(++i < 7)
        book[i] = book[i + 1];
}

void  ft_count(std::string book)
{
    int count;
    int i;

    count = book.size();
    i = -1;
    if(count < 10)
    {
        while(count - 10 != 0)
        {
            std::cout << " ";
            count++;
        }
    }
    count = book.size();
    while(book[++i] && i < 9)
    {
        std::cout << book[i];
    }
    if (count > 9)
        std::cout << ".|";
    else
        std::cout << "|";
    
}

void search(PhoneBook * book, int i)
{
    int j;

    j = 0;
    std::cout << "|******************************************|" << std::endl;
    std::cout << "|    Index|First name| Last Name|  Nickname|" << std::endl;
    std::cout << "|******************************************|" << std::endl;

    while(j < 8 && j <= i  && i > -1)
    {
        std::cout << "         " << j << "|";
        ft_count(book[j].firstName);
        ft_count(book[j].lastName);
        ft_count(book[j].nickname);
        std::cout << std::endl;
        j++;
    }
    std::cout << " Choice your Index " << std::endl;
    std::cin >> j;
    if (j <= i && j < 9 && j >= 0)
        book[j].printContact();
}

int main()
{
    PhoneBook instance[8];
    std::string	input;
    int exit;
    int i ;

    i = -1;
    exit = 0;                                                                            
    title();
    while (exit == 0)
    {
        std::cin.clear();
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (++i > 7)
            {
                i = 7;
                std::cout << "\033[1m\033[31m PhoneBook Capacity has reached its limit of 8" << std::endl;
                std::cout << "      the oldest contact will be deleted  \033[0m" << std::endl;
                move(instance);

            }
            instance[i].addContact();
            instance[i].printContact();
            std::cout << std::endl << " \033[1m\033[32m #############   DONE   ############### \033[0m" << std::endl;
            title();
        }
        else if (input == "SEARCH")
        {
            if (i <= -1)
                std::cout << " \033[1m\033[31m No contact yet\033[0m" << std::endl;
            else
                search(instance, i);
            std::cout << std::endl;
            title();
        }
        else if (input == "EXIT")
        {
            std::cout << "\033[0;31m turning off the device.\033[0m" << std::endl;
            exit = 1;
        }
    }
    return 0;
}