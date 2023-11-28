#include "../pushswap.h"

void    pb(t_list *b, t_list *a)
{
    t_list *tmp;

    tmp = a;
    aff_list(a, b);
    while (tmp && tmp->next)
    {
        if (tmp->num >= tmp->next->num)
            break ;
	ft_lstadd_front(&b, tmp);
      	tmp = tmp->next;
    }
    *a = *tmp;
    *b = *tmp;
}
