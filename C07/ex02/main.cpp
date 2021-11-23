/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:58:03 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/23 02:59:54 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) { 
    Array<> default1;
    Array<> defaultArray(5);
    Array<float> floatArray(4);
    Array<std::string> strArray(2);
    Array<std::string> strcpy;
    //default1
    std::cout << default1.size() << std::endl;

    //defaultArray
    defaultArray[0] = 42;
    defaultArray[1] = 4;
    defaultArray[2] = 2;
    defaultArray[3] = 21;
    defaultArray[4] = 32;

    std::cout << defaultArray.size() << std::endl;

    // floatArray
    floatArray[0] = 42.21f;
    floatArray[1] = 2005.23f;
    floatArray[2] = 235.55f;
    floatArray[3] = 2332.34f;

    std::cout << floatArray.size() << std::endl;

    //strArray
    strArray[0] = "mda-silv";
    strArray[1] = "cadet - 42";
    strcpy = strArray;
    std::cout << strArray.size() << std::endl;
    std::cout << strcpy.size() << std::endl;
    
    try
    {
        std::cout << strcpy[-2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << strcpy[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);   
}