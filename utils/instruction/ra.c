#include "../pushswap.h"

void	ra(t_list **a, int n)
{
	t_list *tmp;

	if (!*a || !(*a)->next)
		return ;
	
	tmp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (n == -1)
		write(1, "ra\n", 4);
}
