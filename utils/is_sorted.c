#include "pushswap.h"

int	is_sort(t_list *a, t_list *b)
{
	t_list	*tmp;

	if (b)
		return (0);
	tmp = a;
	while (tmp && tmp->next)
	{
		if (tmp->num <= tmp->next->num)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}

int	is_sort_one(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp && tmp->next)
	{
		if (tmp->num <= tmp->next->num)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}
