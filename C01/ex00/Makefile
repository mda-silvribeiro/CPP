# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 10:17:16 by mda-silv          #+#    #+#              #
#    Updated: 2021/10/11 10:17:22 by mda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS 		+= --quiet

NAME 			= zombies

CPP				= clang++

FLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			= ${wildcard *.cpp}

OBJS			= ${SRCS:.cpp=.o}

RM 				= rm -rf

GREEN 			= \033[0;32m
RED				= \033[0;31m

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
