#include "../pushswap.h"

void rra(t_list *a)
{
    int tmp;
    int tmp2;

    if (!a || !a->next)
        return;

    tmp = a->num;
    a->num = ft_lstlast(a)->num;
    while (a->next)
    {
        tmp2 = a->next->num;
        a->next->num = tmp;
        tmp = tmp2;
        a = a->next;
    }
    write(1, "rra\n", 4);
}
