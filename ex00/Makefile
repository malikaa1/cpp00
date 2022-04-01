# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrahmani <mrahmani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 14:46:17 by mrahmani          #+#    #+#              #
#    Updated: 2022/04/01 22:35:52 by mrahmani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRCS	=	megaphone.cpp

OBJS	=	${SRCS:.cpp=.o}

CC	=	clang++

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<


all:	${NAME}

${NAME}:	$(OBJS) 
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
		${RM} ${OBJS} 

fclean:	
		${RM} ${OBJS} 
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re