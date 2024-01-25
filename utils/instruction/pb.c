#include "../pushswap.h"

void	pb(t_list **b, t_list **a)
{
	t_list	*tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	ft_reset_index(a);
	ft_reset_index(b);
	write(1, "pb\n", 3);
}
