# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 17:51:00 by nuno              #+#    #+#              #
#    Updated: 2024/05/30 17:51:01 by nuno             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

CXX			=	c++

SRCS		=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp

CXXFLAGS	=	-Wall -Wextra -Werror -g -Wshadow -std=c++98

RM			=	rm -f

OBJS		=	$(SRCS:%.cpp=%.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
