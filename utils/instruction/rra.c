#include "../pushswap.h"

void	rra(t_list **a)
{
	int	tmp;
	int	tmp2;
	t_list *ltmp;

	if (!a || !(*a)->next)
		return ;
	while ((*a)->num > ft_lstlast(*a)->num)
	{
		ltmp = *a;
		tmp = ltmp->num;
		ltmp->num = ft_lstlast(ltmp)->num;
		while (ltmp->next)
		{
			tmp2 = ltmp->next->num;
			ltmp->next->num = tmp;
			tmp = tmp2;
			ltmp = ltmp->next;
		}
		*a = ft_lstfirst(ltmp);
		write(1, "rra\n", 4);
	}
}
