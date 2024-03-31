#include "../utils/header/pushswap.h"

int	get_positiona(t_list **a, long num)
{
	t_list	*tmp;
	int		i;

	tmp = *a;
	i = 1;
	if ((*a)->num > num && num > ft_lstlast(*a)->num)
		i = 0;
	else if (num > ft_max(*a) || num < ft_min(*a))
		i = get_index(a, ft_min(*a));
	else
	{
		while (tmp->next)
		{
			if (tmp->num < num && num < tmp->next->num)
				break ;
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}

int	moovea_rr(t_list **a, t_list **b, long num)
{
	int	position;

	position = get_positiona(a, num);
	if (position < get_index(b, num))
		position = get_index(b, num);
	return (position);
}

int	moovea_rrr(t_list **a, t_list **b, long num)
{
	int	position;

	position = 0;
	if (get_positiona(a, num))
		position = ft_lstsize(*a) - get_positiona(a, num);
	if ((position < (ft_lstsize(*b) - get_index(b, num))) && get_index(b, num))
		position = ft_lstsize(*b) - get_index(b, num);
	return (position);
}

int	moovea_rrarb(t_list **a, t_list **b, long num)
{
	int	position;

	position = 0;
	if (get_index(b, num))
		position = ft_lstsize(*b) - get_index(a, num);
	position += get_positiona(a, num);
	return (position);
}

int	moovea_rrbra(t_list **a, t_list **b, long num)
{
	int	position;

	position = 0;
	if (get_positiona(a, num))
		position = ft_lstsize(*a) - get_positiona(a, num);
	position += get_index(b, num);
	return (position);
}
