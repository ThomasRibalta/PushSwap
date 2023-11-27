#include "../pushswap.h"

void    rra(t_list *a)
{
    int tmp;
    int i;

    i = 0;
    tmp = ft_lstlast(a)->num;
    while (a && a->next)
	{
        a->next->num = a->num;
        if (i == 0)
            a->num = tmp;
	    a = a->next;
        i++;
	}
    write(1, "rra\n", 4);
}