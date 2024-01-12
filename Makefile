SRCS = ft_push_swap.c

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
