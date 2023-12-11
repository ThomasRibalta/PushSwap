#include "pushswap.h"

// void	sort_b(t_list *b)
// {
// 	if (b->num < b->next->num)
// 		sb(b);
// 	if (b->num < ft_lstlast(b)->num)
// 		rrb(b);
// 	if (!is_sort_one(b))
// 		sort_b(b);
// }

void	small_sort(t_list **a, t_list **b)
{
	if (is_sort(*a, *b))
		return;
	if ((*a)->num > (*a)->next->num)
		sa(a);
	if ((*a)->num > ft_lstlast(*a)->num && ft_lstsize(*a) > 2)
		rra(a);
	aff_list(a, b);
	pb(b, a);
	aff_list(a, b);
	pa(b, a);
	aff_list(a, b);
	small_sort(a, b);
}
