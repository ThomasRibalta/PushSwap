#include "../pushswap.h"

void	rb(t_list **b, int n)
{
	t_list *tmp;

	if (!*b || !(*b)->next)
		return ;
	
	tmp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (n == -1)
		write(1, "rb\n", 4);
}