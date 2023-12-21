# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: papereir <papereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 12:56:47 by marvin            #+#    #+#              #
#    Updated: 2023/12/21 14:50:07 by papereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = main.c utils.c ml.c checker.c movements.c sortsmol.c radix.c index.c

OBJS	= ${SRCS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a

PATHLIB = libft

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${LIBFT} ${OBJS}
				${CC} ${CFLAGS} ${LIBFT} ${OBJS} -o ${NAME}

${LIBFT}:
			@make -C ${PATHLIB}

all:		${NAME}

clean:
				@make clean -C ${PATHLIB}
				${RM} ${OBJS} ${OBJB}

fclean: 	clean
				@make fclean -C ${PATHLIB}
				${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re