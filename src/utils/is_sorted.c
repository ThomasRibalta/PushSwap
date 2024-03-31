#include "header/pushswap.h"

int	is_sort(t_list *a)
{
	t_list	*tmp;

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

int	is_reverse_sort(t_list *b)
{
	t_list	*tmp;

	tmp = b;
	while (tmp && tmp->next)
	{
		if (tmp->num > tmp->next->num)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}
