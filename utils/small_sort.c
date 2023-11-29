# include "pushswap.h"

void    small_sort(t_list *a, t_list *b)
{
    is_sort(a, b);
    if (a->num > a->next->num)
        sa(a);
    aff_list(a, b);
    is_sort(a, b);
    if (a->num > ft_lstlast(a)->num)
        rra(a);
    aff_list(a, b);
    is_sort(a, b);
    aff_list(a, b);
    pb(&b, a);
    aff_list(a, b);
    pa(&b, &a);
    aff_list(a, b);
    small_sort(a, b);
}
