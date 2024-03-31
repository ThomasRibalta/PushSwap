#include "../utils/header/pushswap.h"

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
		if ((*a)->next->num == ft_min(*a))
			sa(a);
		else
			rra(a, -1);
	}
	ft_reset_index(a);
}

void	small_sort_3_reverse(t_list **b)
{
	if (ft_max(*b) == (*b)->num && ((*b)->next->num == ft_min(*b)))
	{
		sb(b);
		rb(b, -1);
	}
	else if (ft_min(*b) == (*b)->num)
	{
		if (ft_max(*b) == (*b)->next->num)
			rb(b, -1);
		else
		{
			sb(b);
			rrb(b, -1);
		}
	}
	else
	{
		if ((*b)->next->num == ft_min(*b))
			rrb(b, -1);
		else
			sb(b);
	}
	ft_reset_index(b);
}

void	final_sort_b(t_list **b)
{
	if (ft_lstsize(*b) % 2 > get_index(b, ft_max(*b)))
	{
		while (!is_reverse_sort(*b))
			rb(b, -1);
	}
	else
	{
		while (!is_reverse_sort(*b))
			rrb(b, -1);
	}
}
