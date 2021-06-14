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

clean:
			${RM} ${OBJS_COMMON} ${OBJS_SORTER}

fclean: clean
			${RM} ${NAME} ${NAME_CHECKER}

re: fclean all

.PHONY:		bonus all clean fclean re
