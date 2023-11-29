#include "pushswap.h"

void    is_sort(t_list *a, t_list *b)
{
	t_list *tmp;

	if (b)
		return ;
	tmp = a;
	while (tmp && tmp->next)
	{
		if (tmp->num <= tmp->next->num)
		    tmp = tmp->next;
        else
            return ;
	}
    printf("Trie fini");
    exit(0);
}

int	is_sort_one(t_list *lst)
{
	t_list *tmp;

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