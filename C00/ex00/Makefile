NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

CPPFLAGS	= -Wall -Wextra -Werror -I.

RM 			= rm -rf

GREEN 		= \033[0;32m
RED			= \033[0;31m
PURPLE		= \033[0;35m
BLUE		= \033[1;34m
YELLOW		= \033[1;33m

all:		$(NAME)

$(NAME):	$(OBJS)
				@clang++ $(CPPFLAGS) -o $(NAME) $(OBJS)
				@echo "${GREEN}compiled file\n"

clean:
				$(RM) $(OBJS)
				@echo "${RED}Deleting\n"

fclean:		clean
				$(RM) $(NAME)
				@echo "${RED}Deleting\n"
		
re:			fclean $(NAME)
				@echo "${GREEN}\n"

checker:	$(NAME)
			@echo "$(PURPLE)Checking...${BLUE}"
			./megaphone "shhhhh... I think the students are asleep..."
			@echo "${YELLOW}"
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			@echo "${BLUE}"
			./megaphone

.PHONY:		all clean fclean re checker
