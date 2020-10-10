# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/11 18:02:20 by fulldemo          #+#    #+#              #
#    Updated: 2020/09/11 18:07:26 by fulldemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= whatever

SRC		= whatever.cpp

OBJ		= ${SRC:.cpp=.o}
CCX		= clang++
CFLAG	= -Wall -Werror -Wextra
RM		= rm -f

all:	${NAME}

${NAME}:	${OBJ}
			${CCX} ${CFLAG} -o ${NAME} ${OBJ}

clean:
		${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re