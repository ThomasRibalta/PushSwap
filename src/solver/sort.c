#include "../utils/header/pushswap.h"

void    ft_pushb_at_position(t_list **a, t_list **b)
{
    int nombreCoup;
    t_list  *tmp;

    while (ft_lstsize(*a) > 3 && !is_sort(*a))
    {
        tmp = *a;
        nombreCoup = get_best_mooveB(a, b);
        while (nombreCoup >= 0)
        {
            if (nombreCoup == mooveB_rr(a, b, tmp->num))
                nombreCoup = makeB_rr(a,b, tmp->num);
            else if (nombreCoup == mooveB_rrarb(a, b, tmp->num))
                nombreCoup = makeB_rrarb(a,b, tmp->num);
            else if (nombreCoup == mooveB_rrbra(a, b, tmp->num))
                nombreCoup = makeB_rrbra(a,b, tmp->num);
            else if (nombreCoup == mooveB_rrr(a, b, tmp->num))
                nombreCoup = makeB_rrr(a,b, tmp->num);
            else
                tmp = tmp->next;
        }
    }
    if (!is_reverse_sort(*b))
        final_sort_b(b);
}

void    ft_pushall_b(t_list **a, t_list **b)
{
    if (!is_sort(*a))
        pb(b, a);
    if (ft_lstsize(*a) > 3 && !is_sort(*a))
        pb(b, a);
    if (ft_lstsize(*a) > 3 && !is_sort(*a))
        ft_pushb_at_position(a, b);
    if (!is_sort(*a))
        small_sort_3(a); 
}

void    ft_pushall_a(t_list **a, t_list **b)
{
    int nombreCoup;
    t_list  *tmp;

    while (*b)
    {
        tmp = *b;
        nombreCoup = get_best_mooveA(a, b);
        while (nombreCoup >= 0)
        {
            if (nombreCoup == mooveA_rr(a, b, tmp->num))
                nombreCoup = makeA_rr(a, b, tmp->num);
            else if (nombreCoup == mooveA_rrarb(a, b, tmp->num))
                nombreCoup = makeA_rrarb(a, b, tmp->num);
            else if (nombreCoup == mooveA_rrbra(a, b, tmp->num))
                nombreCoup = makeA_rrbra(a, b, tmp->num);
            else if (nombreCoup == mooveA_rrr(a, b, tmp->num))
                nombreCoup = makeA_rrr(a, b, tmp->num);
            else
                tmp = tmp->next;
        }
    }
}

void    sort(t_list **a)
{
    t_list *b;

    b = NULL;
    if (ft_lstsize(*a) == 2)
        sa(a);
    else if (ft_lstsize(*a) == 3)
        small_sort_3(a);
    else
    {
        ft_pushall_b(a, &b);
        ft_pushall_a(a, &b);
        if (get_index(a, ft_min(*a)) < ft_lstsize(*a) / 2)
        {
            while (!is_sort(*a))
                ra(a, -1);
        }
        else
        {
            while (!is_sort(*a))
                rra(a, -1);
        }
    }
}