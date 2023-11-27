#include "pushswap.h"

void    is_sort(t_list *a)
{
	t_list *tmp;

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