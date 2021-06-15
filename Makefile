# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoghomo <lsoghomo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 15:59:33 by lsoghomo          #+#    #+#              #
#    Updated: 2021/06/15 15:59:34 by lsoghomo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_COMMON = 	./src/common/actions/action1.c \
				./src/common/actions/action2.c \
				./src/common/actions/action3.c \
				./src/common/args.c \
				./src/common/clean.c \
				./src/common/stack.c \
				./src/common/utils/utils1.c \
				./src/common/utils/utils2.c \
				./src/common/utils/utils3.c

SRC_SORTER =	./src/sorter/looper.c \
				./src/sorter/main.c \
				./src/sorter/sorter.c \
				./src/sorter/utils/five_opt.c \
				./src/sorter/utils/indexer.c \
				./src/sorter/utils/rotator.c \
				./src/sorter/utils/sorter_utils.c

OBJS_COMMON	= ${SRC_COMMON:.c=.o}
OBJS_SORTER		= ${SRC_SORTER:.c=.o}


GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0;0m

INCLUDE = ./src/include

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

CC = gcc
RM = rm -f

all: ${NAME}

.c.o:
			${CC} ${CFLAGS} -I$(INCLUDE) -c $< -o ${<:.c=.o}

$(NAME): $(OBJS_COMMON) $(OBJS_SORTER)
			${CC} $(CFLAGS) -I$(INCLUDE) -o $(NAME) $(OBJS_COMMON) $(OBJS_SORTER)
			@echo "$(GREEN)	done! $(RESET)"

clean:
			${RM} ${OBJS_COMMON} ${OBJS_SORTER}

fclean: clean
			${RM} ${NAME} ${NAME_CHECKER}
			@echo "$(RED) deleted! $(RESET)"

re: fclean all

.PHONY:		bonus all clean fclean re
