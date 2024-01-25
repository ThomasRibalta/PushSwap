#include "../pushswap.h"

void	rrb(t_list **b)
{
	int	tmp;
	int	tmp2;
	t_list *ltmp;

	if (!b || !(*b)->next)
		return ;
	ltmp = *b;
	tmp = ltmp->num;
	ltmp->num = ft_lstlast(ltmp)->num;
	while (ltmp->next)
	{
		tmp2 = ltmp->next->num;
		ltmp->next->num = tmp;
		tmp = tmp2;
		ltmp = ltmp->next;
	}
	*b = ft_lstfirst(ltmp);
	ft_reset_index(b);
	write(1, "rrb\n", 4);
}