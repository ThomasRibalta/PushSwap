#include "../header/pushswap.h"

void	ss(t_list **a, t_list **b)
{
	int	tmp;

	if (ft_lstsize(*a) < 2 || ft_lstsize(*b) < 2)
		return ;
	tmp = (*a)->num;
	(*a)->num = (*a)->next->num;
	(*a)->next->num = tmp;
	tmp = (*b)->num;
	(*b)->num = (*b)->next->num;
	(*b)->next->num = tmp;
	write(1, "ss\n", 3);
}
