#include "../header/pushswap.h"

void	rra(t_list **a, int n)
{
	t_list *tmp;
	int		last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	last = ft_lstlast(*a)->num;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	while (tmp->next->num != last)
		tmp = tmp->next;
	tmp->next = NULL;
	if (n == -1)
		write(1, "rra\n", 4);
}