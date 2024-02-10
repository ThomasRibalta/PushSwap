#include "pushswap.h"

void    ft_pushb_at_position(t_list **a, t_list **b)
{
    int nombreCoup;
    t_list  *tmp;

    while (ft_lstsize(*a) > 3 && !is_sort(*a))
    {
        tmp = *a;
        nombreCoup = get_best_moove(a, b, tmp->num);
        //aff_list(a, b);
        while (nombreCoup >= 0)
        {
            if (nombreCoup == moove_rr(a, b, tmp->num))
                nombreCoup = make_rr(a,b, tmp->num);
            if (nombreCoup == moove_rrarb(a, b, tmp->num))
                nombreCoup = make_rrarb(a,b, tmp->num);
            if (nombreCoup == moove_rrbra(a, b, tmp->num))
                nombreCoup = make_rrbra(a,b, tmp->num);
            if (nombreCoup == moove_rrr(a, b, tmp->num))
                nombreCoup = make_rrr(a,b, tmp->num);
            tmp = tmp->next;
        }
    }
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

    while (ft_lstsize(*b) != 0)
    {
        tmp = *b;
        nombreCoup = get_best_moove2(a, b, tmp->num);
        printf("nb coup: %d\n", nombreCoup);
        printf("nb coup rr: %d\n", moove_rr(b, a, tmp->num));
        printf("nb coup rrarb: %d\n", moove_rrarb(b, a, tmp->num));
        printf("nb coup rrbra: %d\n", moove_rrbra(b, a, tmp->num));
        printf("nb coup rrr: %d\n", moove_rrr(b, a, tmp->num));
        while (nombreCoup >= 0)
        {
            if (nombreCoup == moove_rr(b, a, tmp->num))
                nombreCoup = make2_rr(a, b, tmp->num);
            if (nombreCoup == moove_rrarb(b, a, tmp->num))
                nombreCoup = make2_rrarb(a, b, tmp->num);
            if (nombreCoup == moove_rrbra(b, a, tmp->num))
                nombreCoup = make2_rrbra(a, b, tmp->num);
            if (nombreCoup == moove_rrr(b, a, tmp->num))
                nombreCoup = make2_rrr(a, b, tmp->num);
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
        while (!is_sort(*a))
        {
            rra(a, -1);
            aff_list(a, &b);
        }
    }
}