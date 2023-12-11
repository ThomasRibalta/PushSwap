#include "../pushswap.h"

void	ra(t_list **a)
{
	int	tmp;
	int	tmp2;
	t_list *ltmp;

	if (!*a || !(*a)->next)
		return ;
	while ((*a)->num > (*a)->next->num && (*a)->num > ft_lstlast(*a)->num)
	{
		ltmp = ft_lstlast(*a);
		printf("%d %d \n", ltmp->prev->num, ltmp->num);
		tmp = ltmp->num;
		ltmp->num = ft_lstfirst(ltmp)->num;
		while (ltmp->prev)
		{
			tmp2 = ltmp->prev->num;
			printf("ltmp : %d %d %d \n", ltmp->num, tmp, tmp2);
			ltmp->prev->num = tmp;
			tmp = tmp2;
			ltmp = ltmp->prev;
		}
		*a = ltmp;
		write(1, "ra\n", 4);
	}
}
