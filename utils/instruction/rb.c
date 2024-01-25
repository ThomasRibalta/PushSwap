#include "../pushswap.h"

void	rb(t_list **b)
{
	int	tmp;
	int	tmp2;
	t_list *ltmp;

	if (!*b || !(*b)->next)
		return ;
	ltmp = ft_lstlast(*b);
	tmp = ltmp->num;
	ltmp->num = ft_lstfirst(ltmp)->num;
	while (ltmp->prev)
	{
		tmp2 = ltmp->prev->num;
		ltmp->prev->num = tmp;
		tmp = tmp2;
		ltmp = ltmp->prev;
	}
	*b = ltmp;
	ft_reset_index(b);
	write(1, "rb\n", 4);
}