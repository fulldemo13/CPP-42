# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/19 09:23:16 by fulldemo          #+#    #+#              #
#    Updated: 2020/05/25 10:22:16 by fulldemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRC			= megaphone.cpp
OBJ			= ${SRC:.cpp=.o}
CCX			= clang++
CFLAG		= -Wall -Wextra -Werror
RM			= rm -f

all:		${NAME}

${NAME}:	${OBJ}
			${CCX} ${CFLAG} -o ${NAME} ${OBJ}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re