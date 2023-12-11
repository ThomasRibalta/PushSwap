SRCS= main.c utils/ft_atoi.c utils/ft_lstadd_back.c utils/parsing.c utils/ft_lstdelone.c utils/ft_lstnew.c utils/ft_split.c utils/is_sorted.c utils/small_sort.c utils/ft_isdigit.c utils/ft_lstadd_front.c utils/ft_lstlast.c utils/ft_lstsize.c utils/instruction/pa.c utils/instruction/pb.c utils/instruction/ra.c utils/instruction/rb.c utils/instruction/sa.c utils/instruction/sb.c utils/instruction/rra.c utils/instruction/rrb.c

BONUS= main.c

CC= gcc
RM= rm -f
CFLAGS= -Wall -Wextra -Werror -I.

NAME= push_swap

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "Compilation termine."

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re bonus
