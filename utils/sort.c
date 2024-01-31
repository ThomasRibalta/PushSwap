#include "pushswap.h"

void    ft_pushb_at_position(t_list **a, t_list **b)
{
    int nombreCoup;
    t_list  *tmp;

    while (ft_lstsize(a) > 3 && !is_sort(a))
    {
        tmp = *a;
        nombreCoup = get_best_moove(a, b, tmp->num);
        while (tmp)
        {
            tmp = tmp->next;
        }
    }
}

void    ft_pushall_b(t_list **a, t_list **b)
{
    if (!is_sort(*a))
        pb(b, a);
    if (ft_lstsize(*a) > 3 && !is_sort(*a))
        pb(b,a);
    if (ft_lstsize(*a) > 3 && !is_sort(*a))
        ft_pushb_at_position(a, b);
    if (!is_sort(*a))
        small_sort_3(a); 
}

void    sort(t_list **a)
{
    t_list *b;

    b = NULL;
    if (ft_lstsize(*a) == 2)
        sa(a);
    else if (ft_lstsize(*a) == 3)
        small_sor_3(a);
    else
    {
        ft_pushall_b(a, &b);
    }
}