# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 10:52:31 by okraus            #+#    #+#              #
#    Updated: 2024/06/22 16:29:15 by okraus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	InterfaceAndRecap
SRCS		=	main.cpp colours.cpp Amateria.cpp Ice.cpp Cure.cpp ICharacter.cpp Character.cpp \
				IMateriaSource.cpp MateriaSource.cpp
HEADERS		=	colours.hpp Amateria.hpp Ice.hpp Cure.hpp ICharacter.hpp Character.hpp \
				IMateriaSource.hpp MateriaSource.hpp
OBJS		=	$(SRCS:.cpp=.o)
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g
CPP			=	c++

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp $(HEADERS)
			$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
