/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 21:49:14 by mda-silv          #+#    #+#             */
/*   Updated: 2021/11/21 21:49:15 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
/*
Serialization is a mechanism to convert an object into a
sequence of bytes so that it can be stored in memory.
The byte stream, once created, also can be streamed 
across a communication link to a remote receiving end. 
The reverse of serialization is called deserialization, 
where the data in the byte stream is used to reconstruct
it to its original object form. Apart from object persistence, 
this mechanism is particularly useful in transmitting object
information in serialized form, say, to the server which, on 
receiving it, can deserialize and create the object format which 
is its original form.
*/

uintptr_t serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize( uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}

int main( void ) {
    Data *a = new Data;
    Data *b;
    uintptr_t v = 0;

    a->data = 42;
    a->test = "Hello";
    std::cout << "before serialize: " << v << std::endl; 
    v = serialize(a);
    std::cout << "Data a: " << a->data << ", a->test: " << a->test << ", uintptr_t: " << v << std::endl;
    b = deserialize(v);
    std::cout << "New Data b->data: " << b->data << ", b->test: " << b->test << ", uintptr_t: " << v << std::endl;
    std::cout << "Data a: a->data: " << a->data << ", a->test: " << a->test << std::endl;
    return (0);
}