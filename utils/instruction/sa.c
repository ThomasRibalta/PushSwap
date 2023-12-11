#include "../pushswap.h"

void	sa(t_list **a)
{
	int	tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	tmp = (*a)->num;
	(*a)->num = (*a)->next->num;
	(*a)->next->num = tmp;
	write(1, "sa\n", 3);
}
