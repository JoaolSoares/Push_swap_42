# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:29:46 by jlucas-s          #+#    #+#              #
#    Updated: 2022/11/09 23:31:29 by jlucas-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			push_swap

FLAGS =			-Werror -Wall -Wextra

CC =			cc

GREEN =			\033[1;32m
NOCOLOR =		\033[0m

LIBFTPATH =		./lib
LIBFT =			./lib/libft.a

SRCS =			src/main.c					\
				src/utils.c					\
				src/cases.c					\
				src/long_utils.c			\
				src/movements/swap.c		\
				src/movements/push.c		\
				src/movements/rotate.c		\
				src/movements/rev_rotate.c	\
				src/testes.c				\

OBJS =			${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@ make -C ${LIBFTPATH}
	@ $(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@ echo "${GREEN}-=- PUSH_SWAP MANDATORY SUCCESSFUL COMPILED -=-${NOCOLOR}"
	
clean:
	@ rm -f $(OBJS) $(OBJS_BONUS)
	@ make fclean -C ${LIBFTPATH}

rmv:
	@ rm -f $(NAME)

fclean: rmv clean

re: fclean all

refast: rmv all clean

.PHONY: all clean rmv fclean re refast