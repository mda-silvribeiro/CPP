MAKEFLAGS		+= --quiet

NAME			= aanimal

SRCS			= ${wildcard *.cpp}

OBJS			= ${SRCS:%.cpp=%.o}

OBJS_DIR		= objs

CPP 			= clang++

CFLAGS			= -Wall -Wextra -Werror -std=c++98

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