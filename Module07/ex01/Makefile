# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/11 18:49:04 by fulldemo          #+#    #+#              #
#    Updated: 2020/09/11 18:54:56 by fulldemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= iter

SRC			= iter.cpp

OBJ			= ${SRC:.cpp=.o}
CCX			= clang++
CFLAG		= -Wall -Wextra -Werror
RM 			= rm -fr

all:		${NAME}

${NAME}:	${OBJ}
			${CCX} ${CFLAG} -o ${NAME} ${OBJ}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
