#include "../pushswap.h"

void    rra(t_list *a)
{
	int tmp;
	int tmp2;

    tmp2 = a->num;
    while (a && a->next)
	{
        tmp = tmp2;
        if (!a->prev)
            a->num = ft_lstlast(a)->num; 
        tmp2 = a->next->num;
        a->next->num = tmp;
        a = a->next;
	}
    write(1, "rra\n", 4);
}
