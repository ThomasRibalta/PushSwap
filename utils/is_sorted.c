#include "pushswap.h"

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
