# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 12:14:46 by mda-silv          #+#    #+#              #
#    Updated: 2021/11/08 12:14:48 by mda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS		+= --quiet

NAME			= diamondtrap

SRCS			= ${wildcard *.cpp}

OBJS			= ${SRCS:%.cpp=%.o}

OBJS_DIR		= objs

CPP 			= clang++

CFLAGS			= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

RM				= rm -rf

DEL			= \033[1;35m\033[1;47m
SUCCESS		= \033[1;32m\033[1;44m

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CPP) $(CFLAGS) -o $@ $(OBJS) -I.
				@mkdir $(OBJS_DIR) && mv $(OBJS) $(OBJS_DIR)
				@echo "${SUCCESS}compiled file\n"	

.cpp.o:
				@ $(CPP) $(CFLAGS) -I -g -c $< -o $@	

clean:
			$(RM) $(OBJS_DIR)
			@echo "${DEL}###### Deleting ######\n"
	
fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
