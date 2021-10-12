# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 10:18:23 by mda-silv          #+#    #+#              #
#    Updated: 2021/10/11 10:18:25 by mda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS 		+= --quiet

NAME 			= zombies

CPP				= clang++

FLAGS			= -g -fsanitize=address -Wall -Wextra -Werror -I.

SRCS			= Zombie.cpp main.cpp ZombieHorde.cpp

OBJS			= ${SRCS:.cpp=.o}

RM 				= rm -rf

GREEN 			= \033[0;32m
RED				= \033[0;31m
PURPLE			= \033[0;35m
BLUE			= \033[1;34m
YELLOW			= \033[1;33m

all:			$(NAME)

$(NAME):		$(OBJS)
					@$(CPP) $(FLAGS) -o $(NAME) $(OBJS)
					@echo "${GREEN}compiled file\n"

clean:
				$(RM) $(OBJS)
				@echo "${RED}Deleting\n"

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
