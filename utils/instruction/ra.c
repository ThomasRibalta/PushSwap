#include "../pushswap.h"

void	ra(t_list **a)
{
	int	tmp;
	int	tmp2;
	t_list *ltmp;

	if (!*a || !(*a)->next)
		return ;
	ltmp = ft_lstlast(*a);
	tmp = ltmp->num;
	ltmp->num = ft_lstfirst(ltmp)->num;
	while (ltmp->prev)
	{
		tmp2 = ltmp->prev->num;
		ltmp->prev->num = tmp;
		tmp = tmp2;
		ltmp = ltmp->prev;
	}
	*a = ltmp;
	ft_reset_index(a);
	write(1, "ra\n", 4);
}
