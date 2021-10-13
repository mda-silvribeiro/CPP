# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 10:19:06 by mda-silv          #+#    #+#              #
#    Updated: 2021/10/11 10:19:15 by mda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --quiet

NAME		= memory

RM			= rm -rf

GPP			= clang++ -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp

OBJS		= ${SRCS:.cpp=.o}

GREEN 			= \033[0;32m
RED				= \033[0;31m
PURPLE			= \033[0;35m
BLUE			= \033[1;34m
YELLOW			= \033[1;33m

all:		${NAME}

${NAME}:	${OBJS}
			@$(GPP) -o $(NAME) $(OBJS)
			@echo "${GREEN}compiled file\n"

clean:
			$(RM) $(OBJS)
			@echo "${RED}Deleting\n"

fclean:		clean
			$(RM) $(NAME)

re:			fclean

.PHONY:		all clean fclean re
