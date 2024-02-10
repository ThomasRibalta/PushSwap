#include "pushswap.h"

void	small_sort_3(t_list **a)
{
	if (ft_max(*a) == (*a)->num)
	{
		ra(a, -1);
		if (!is_sort(*a))
			sa(a);
	}
	else if (ft_min(*a) == (*a)->num)
	{
		sa(a);
		ra(a, -1);
	}
	else
	{
		aff_list(a, a);
		if((*a)->next->num == ft_min(*a))
			sa(a);
		else
			rra(a, -1);
	}
	aff_list(a, a);
}
