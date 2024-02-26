NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

SRC_1 = src/solver/check_moove_a.c \
		src/solver/check_moove_b.c \
		src/solver/ft_minMax.c \
		src/solver/get_best_moove.c \
		src/solver/make_a.c \
		src/solver/make_b.c \
		src/solver/small_sort.c \
		src/solver/sort.c \
		src/utils/instruction/pa.c \
		src/utils/instruction/pb.c \
		src/utils/instruction/sa.c \
		src/utils/instruction/sb.c \
		src/utils/instruction/ss.c \
		src/utils/instruction/ra.c \
		src/utils/instruction/rb.c \
		src/utils/instruction/rr.c \
		src/utils/instruction/rra.c \
		src/utils/instruction/rrb.c \
		src/utils/instruction/rrr.c \
		src/utils/ft_isdigit.c \
		src/utils/ft_lstadd_back.c \
		src/utils/ft_lstadd_front.c \
		src/utils/ft_lstdelone.c \
		src/utils/ft_lstlast.c \
		src/utils/ft_lstnew.c \
		src/utils/ft_lstsize.c \
		src/utils/is_sorted.c \
		src/utils/utils.c \
		src/utils/parsing.c \
		
		
BONUS_SRC = src/checker/checker.c \
		src/checker/checker_utils.c \
		src/utils/GetNextLine/get_next_line.c \
			

OBJ_1 = ${SRC_1:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o}

BONUS = POPO

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1}
	make -C src/utils/libft
	${CC} ${FLAGS} ${OBJ_1} src/solver/main.c -o push_swap -L src/utils/libft -lft

${BONUS}: ${BONUS_OBJ} ${OBJ_1}
	make -C src/utils/libft
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_1} -o checker -L src/utils/libft -lft

all: ${NAME} ${BONUS}

bonus: ${BONUS} 

clean:
	make -C src/utils/libft clean
	${RM} ${OBJ_1} ${BONUS_OBJ} ${NAME} ${BONUS}

fclean: clean
	${RM} ${NAME}
	make -C src/utils/libft fclean

re: clean all

.PHONY: all clean fclean re bonus