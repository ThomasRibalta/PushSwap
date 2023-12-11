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
    *b = NULL; // Assurez-vous de mettre le pointeur de liste à NULL après la libération.
}

void	pa(t_list **b, t_list **a)
{
	t_list	*tmp;

	tmp = *b;
	if (!is_sort_one(*a) || ft_lstsize(*b) == 0)
		return ;
	while (tmp && tmp->next)
	{
		ft_lstadd_front(a, ft_lstnew(tmp->num));
		tmp = tmp->next;
		write(1, "pa\n", 3);
	}
	ft_lstadd_front(a, ft_lstnew(tmp->num));
	free_lst(b);
	write(1, "pa\n", 3);
}
