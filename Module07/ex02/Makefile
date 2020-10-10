# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/15 17:21:07 by fulldemo          #+#    #+#              #
#    Updated: 2020/09/16 10:45:56 by fulldemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= array

SRC			= Array.cpp

OBJ			= ${SRC:.cpp=.o}
CCX			= clang++
CFLAG		= -Wall -Wextra -Werror
RM			= rm -fr

all:		${NAME}

${NAME}:	${OBJ}
			${CCX} ${CFLAG} -o ${NAME} ${OBJ}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re