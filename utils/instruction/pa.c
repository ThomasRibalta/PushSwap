#include "../pushswap.h"

void    pa(t_list **b, t_list **a)
{
    t_list *tmp;

    tmp = *b;
    if (!is_sort_one(*a))
        return ;
    while (tmp && tmp->next)
    {
	    ft_lstadd_front(a, ft_lstnew(tmp->num));
      	tmp = tmp->next;
    }
    ft_lstadd_front(a, ft_lstnew(tmp->num));
    *b = NULL;
    write(1, "pa\n", 3);
}