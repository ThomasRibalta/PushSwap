# include "pushswap.h"

void    small_sort(t_list *a, t_list *b)
{
    is_sort(a);
    if (a->num > a->next->num)
        sa(a);
    is_sort(a);
    if (a->num > ft_lstlast(a)->num)
        rra(a);
    is_sort(a);
    pa(a, b);
    pb(b ,a);
    small_sort(a, b);
}