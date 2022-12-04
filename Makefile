# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:29:46 by jlucas-s          #+#    #+#              #
#    Updated: 2022/12/04 20:12:30 by jlucas-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =			push_swap
NAME_BONUS =	checker

FLAGS =			-Werror -Wall -Wextra

CC =			cc

GREEN =			\033[1;32m
NOCOLOR =		\033[0m

LIBFTPATH =		./lib
LIBFT =			./lib/libft.a

PUBLIC_SRCS =	src/utils.c								\
				src/movements/swap.c					\
				src/movements/push.c					\
				src/movements/rotate.c					\
				src/movements/rev_rotate.c				\
				src/testes.c							\

SRCS =			src/mandatory/main.c					\
				src/mandatory/cases/three_case.c		\
				src/mandatory/cases/long_case.c			\
				src/mandatory/cases/long_case_utils.c	\
				$(PUBLIC_SRCS)							\

SRCS_BONUS =	src/bonus/main.c						\
				src/bonus/main_utils.c					\
				src/bonus/free.c						\
				$(PUBLIC_SRCS)							\

OBJS =			${SRCS:.c=.o}
OBJS_BONUS =	${SRCS_BONUS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	@ make -C ${LIBFTPATH}
	@ $(CC) $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@ echo "${GREEN}-=- PUSH_SWAP MANDATORY SUCCESSFUL COMPILED -=-${NOCOLOR}"

bonus: ${OBJS_BONUS}
	@ make -C ${LIBFTPATH}
	@ $(CC) $(FLAGS) $(OBJS_BONUS) $(LIBFT) -o $(NAME_BONUS)
	@ echo "${GREEN}-=- CHECKER SUCCESSFUL COMPILED -=-${NOCOLOR}"

clean:
	@ rm -f $(PUBLIC_OBJS) $(OBJS) $(OBJS_BONUS)
	@ make fclean -C ${LIBFTPATH}

rmv:
	@ rm -f $(NAME) $(NAME_BONUS)

fclean: rmv clean

re: fclean all
rebonus: fclean bonus

refast: rmv all clean
rebofast: rmv bonus clean

.PHONY: all bonus clean rmv fclean re rebonus refast rebofast