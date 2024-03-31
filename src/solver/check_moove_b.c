#include "../utils/header/pushswap.h"

int	get_positionb(t_list **b, long num)
{
	t_list	*tmp;
	int		i;

	tmp = *b;
	i = 1;
	if ((*b)->num < num && num < ft_lstlast(*b)->num)
		i = 0;
	else if (num > ft_max(*b) || num < ft_min(*b))
		i = get_index(b, ft_max(*b));
	else
	{
		while (tmp->next)
		{
			if (tmp->num > num && num > tmp->next->num)
				break ;
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}

int	mooveb_rr(t_list **a, t_list **b, long num)
{
	int	position;

	position = get_positionb(b, num);
	if (position < get_index(a, num))
		position = get_index(a, num);
	return (position);
}

int	mooveb_rrr(t_list **a, t_list **b, long num)
{
	int	position;

	position = 0;
	if (get_positionb(b, num))
		position = ft_lstsize(*b) - get_positionb(b, num);
	if ((position < (ft_lstsize(*a) - get_index(a, num))) && get_index(a, num))
		position = ft_lstsize(*a) - get_index(a, num);
	return (position);
}

int	mooveb_rrarb(t_list **a, t_list **b, long num)
{
	int	position;

	position = 0;
	if (get_index(a, num))
		position = ft_lstsize(*a) - get_index(a, num);
	position += get_positionb(b, num);
	return (position);
}

int	mooveb_rrbra(t_list **a, t_list **b, long num)
{
	int	position;

	position = 0;
	if (get_positionb(b, num))
		position = ft_lstsize(*b) - get_positionb(b, num);
	position += get_index(a, num);
	return (position);
}
