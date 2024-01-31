#include "pushswap.h"

void	small_sort_3(t_list **a)
{
	if (ft_max(*a) == (*a)->num)
	{
		rra(a);
		if (!is_sort(*a))
			sa(a);
	}
	else if (ft_min(*a) == (*a)->num)
	{
		sa(a);
		ra(a);
	}
	else
	{
		if((*a)->next->num == ft_min(*a))
			sa(a);
		else
			rra(a);
	}
}
