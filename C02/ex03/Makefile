MAKEFLAGS	+= --quiet

NAME		=  bsp

SRCS		= ${wildcard *.cpp}

OBJS		= ${SRCS:.cpp=.o}

SAN			=  -fsanitize=address

OBJS_DIR	= objs

GPP			= clang++

FLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

DEL			= \033[1;35m\033[1;47m
SUCCESS		= \033[1;32m\033[1;44m

all:		$(NAME)

%.o			: %.c
			$(GPP) $(SAN) $(FLAGS) -c -o $@ $<

$(NAME):	$(OBJS)
			$(GPP) $(FLAGS) -o $(NAME) $(OBJS)
			@mkdir $(OBJS_DIR) && mv $(OBJS) $(OBJS_DIR)
			@echo "${SUCCESS}compiled file\n"


clean:		
			$(RM) $(OBJS_DIR)
			@echo "${DEL}###### Deleting ######\n"

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
