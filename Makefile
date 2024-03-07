# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkoval <kkoval@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 15:50:26 by kkoval            #+#    #+#              #
#    Updated: 2024/03/07 15:50:33 by kkoval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_push_swap.c ft_check_input.c ft_do_moves.c ft_double_moves.c\
		ft_moves.c ft_utils.c

OBJS = ${SRCS:.c=.o}

HEADER = ft_push_swap.h
NAME = push_swap
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c	Makefile ${HEADER} 
	${CC} ${CFLAGS} -c $< -o $@ #${<:.c=.o}

all:        ${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS}
			${RM}

fclean:     clean
			${RM} ${NAME}

re:         fclean all

.PHONY: all clean fclean re
