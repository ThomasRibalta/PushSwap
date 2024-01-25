#include "../pushswap.h"

void free_lst(t_list **b)
{
    t_list *current = *b;
    t_list *next;

    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *b = NULL;
}

void	pa(t_list **b, t_list **a)
{
	t_list	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	ft_reset_index(a);
	ft_reset_index(b);
	write(1, "pa\n", 3);
}
