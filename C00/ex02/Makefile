MAKEFLAGS += --quiet

NAME		= account

SRCS		= Account.cpp tests.cpp

OBJS		= $(SRCS:.cpp=.o)

CPPFLAGS	= -g -fsanitize=address -Wall -Wextra -Werror -I.

RM 			= rm -rf

GREEN 		= \033[0;32m
RED			= \033[0;31m

all:		$(NAME)

$(NAME):	$(OBJS)
				@clang++ $(CPPFLAGS) -o $(NAME) $(OBJS)
				@echo "${GREEN}compiled file\n"

clean:
				$(RM) $(OBJS)
				@echo "${RED}Deleting\n"

fclean:		clean
				$(RM) $(NAME)
		
re:			fclean $(NAME)

.PHONY:		all clean fclean re