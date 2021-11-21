# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tester.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 22:12:53 by mda-silv          #+#    #+#              #
#    Updated: 2021/11/20 22:12:54 by mda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

test_script() {
    echo "./convert" "$*"
    ./convert $@
    read -n1
    echo ""
}

echo "Starting the project with make"
if ! make re; then
    exit 1;
fi
echo""

echo "Starting ...."

test_script 

test_script nanf

test_script -inff

test_script +inff

test_script nan

test_script -inf

test_script +inf

test_script 42.0f

test_script 0

test_script .

test_script 4242

test_script A

test_script a

test_script 0.

test_script -0.2

test_script -1

test_script -.285

test_script 1.0f

test_script 20.567f

test_script 1000.9833764

test_script Hello

test_script Hello I am from

test_script k 453 212 aa

test_script .f

test_script 1980093232

exit 1;