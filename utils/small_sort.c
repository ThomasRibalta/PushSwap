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
		return ;
	if ((*a)->num > ft_lstlast(*a)->num && ft_lstsize(*a) > 2 && (*a)->num > (*a)->next->num)
		ra(a);
	if ((*a)->num > (*a)->next->num)
		sa(a);
	if ((*a)->num > ft_lstlast(*a)->num && ft_lstsize(*a) > 2)
		rra(a);
	pb(b, a);
	pa(b, a);
	small_sort(a, b);
}
