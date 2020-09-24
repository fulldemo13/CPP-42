# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fulldemo <fulldemo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/21 15:45:51 by fulldemo          #+#    #+#              #
#    Updated: 2020/05/26 10:43:43 by fulldemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRC			= phonebook.cpp \
			  contact.cpp
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