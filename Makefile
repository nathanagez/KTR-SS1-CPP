SRCS	=	main.cpp \
			Character.cpp \
			TestCharacter.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC	=	g++

CXXFLAGS	=	-W -Wextra -Wall -Werror -I./include

NAME	=	exo

all:	$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re