# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/31 19:09:29 by fulldemo          #+#    #+#              #
#    Updated: 2020/07/31 19:10:26 by fulldemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= convert

SRC			= ScalarConverter.cpp \
			  main.cpp
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