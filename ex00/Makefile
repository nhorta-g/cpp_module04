NAME		=	ex00

CC			=	c++

SRCS		=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address

RM			=	rm -f

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
