# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: papereir <papereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 13:38:45 by papereir          #+#    #+#              #
#    Updated: 2022/10/12 13:38:48 by papereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_bzero.c ft_isalnum.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c\
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c\
			ft_tolower.c ft_toupper.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strdup.c ft_calloc.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_itoa.c ft_striteri.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c
  #
OBJS    = ${SRCS:.c=.o}
SRCSB   = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstnew_bonus.c
OBJB    = ${SRCSB:.c=.o}
NAME    = libft.a
CC  = gcc
RM  = rm -f
CFLAGS  = -Wall -Wextra -Werror
AR = ar rc
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:    ${OBJS}
				${AR} ${NAME} ${OBJS}
				ranlib ${NAME}
bonus:      ${OBJS} ${OBJB}
				${AR}  ${NAME} ${OBJB}
				ranlib ${NAME}
all:        ${NAME}
clean:
				${RM} ${OBJS} ${OBJB}
fclean:     clean
				${RM} ${NAME}
re:         fclean all
.PHONY:     all clean fclean re
