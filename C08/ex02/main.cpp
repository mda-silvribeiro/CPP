/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:19:40 by mda-silv          #+#    #+#             */
/*   Updated: 2021/12/02 13:19:43 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T>
void display(std::stack<T> s) {
    std::cout << "[ ";
    while(!s.empty()) {
        T elem = s.top();
        s.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    display(s);
    MutantStack<std::string> s1;
    s1.push("Hello");
    display(s1);

    s1.push("World");
    display(s1);

    s1.pop();
    s1.pop();
    display(s1);

    while(!s1.empty())
        s1.pop();
    display(s1);

    std::cout << "Size: " << s1.size() << std::endl;

    s1.push("42");
    display(s1);

    s1.top() = "100";
    display(s1);

    return (0);
}