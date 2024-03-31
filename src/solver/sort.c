#include "../utils/header/pushswap.h"

void	ft_pushb_at_position(t_list **a, t_list **b)
{
	int		nombrecoup;
	t_list	*tmp;

	while (ft_lstsize(*a) > 3 && !is_sort(*a))
	{
		tmp = *a;
		nombrecoup = get_best_mooveb(a, b);
		while (nombrecoup >= 0)
		{
			if (nombrecoup == mooveb_rr(a, b, tmp->num))
				nombrecoup = makeb_rr(a, b, tmp->num);
			else if (nombrecoup == mooveb_rrr(a, b, tmp->num))
				nombrecoup = makeb_rrr(a, b, tmp->num);
			else if (nombrecoup == mooveb_rrbra(a, b, tmp->num))
				nombrecoup = makeb_rrbra(a, b, tmp->num);
			else if (nombrecoup == mooveb_rrarb(a, b, tmp->num))
				nombrecoup = makeb_rrarb(a, b, tmp->num);
			else
				tmp = tmp->next;
		}
	}
}

void	ft_pushall_b(t_list **a, t_list **b)
{
	if (!is_sort(*a))
		pb(b, a);
	if (ft_lstsize(*a) > 3 && !is_sort(*a))
		pb(b, a);
	if (ft_lstsize(*a) > 3 && !is_sort(*a))
		ft_pushb_at_position(a, b);
	if (!is_sort(*a))
		small_sort_3(a);
}

void	ft_pushall_a(t_list **a, t_list **b)
{
	int		nombrecoup;
	t_list	*tmp;

	while (*b)
	{
		tmp = *b;
		nombrecoup = get_best_moovea(a, b);
		while (nombrecoup >= 0)
		{
			if (nombrecoup == moovea_rr(a, b, tmp->num))
				nombrecoup = makea_rr(a, b, tmp->num);
			else if (nombrecoup == moovea_rrarb(a, b, tmp->num))
				nombrecoup = makea_rrarb(a, b, tmp->num);
			else if (nombrecoup == moovea_rrbra(a, b, tmp->num))
				nombrecoup = makea_rrbra(a, b, tmp->num);
			else if (nombrecoup == moovea_rrr(a, b, tmp->num))
				nombrecoup = makea_rrr(a, b, tmp->num);
			else
				tmp = tmp->next;
		}
	}
}

void	sort(t_list **a)
{
	t_list	*b;

	b = NULL;
	if (ft_lstsize(*a) == 2)
		sa(a);
	else if (ft_lstsize(*a) == 3)
		small_sort_3(a);
	else
	{
		ft_pushall_b(a, &b);
		ft_pushall_a(a, &b);
		if (get_index(a, ft_min(*a)) < ft_lstsize(*a) / 2)
		{
			while (!is_sort(*a))
				ra(a, -1);
		}
		else
		{
			while (!is_sort(*a))
				rra(a, -1);
		}
	}
}
