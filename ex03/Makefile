# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 17:49:47 by nuno              #+#    #+#              #
#    Updated: 2024/06/02 17:45:17 by nuno             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex03

CXX			=	c++

SRCS		=	main.cpp \
				Character.cpp \
				AMateria.cpp \
				MateriaSource.cpp \
				Ice.cpp \
				Cure.cpp

CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98 -fsanitize=address

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