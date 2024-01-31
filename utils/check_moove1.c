#include "pushswap.h"

long get_position(t_list **b, long num)
{
    t_list *tmp;
    long    i;

    tmp = *b;
    i = 0;
    while (tmp)
    {
        if (tmp->num < num)
        {
            tmp = tmp->next;
            i++;
        }
        else
            break ;
    }
    return (i);
}

long get_index(t_list **lst, long num){
    t_list *tmp;
    
    tmp = *lst;
    while (tmp)
    {
        if (tmp->num == num)
            return (tmp->index);
        tmp = tmp->next;
    }
    return (0);
}

int moove_rr(t_list **a, t_list **b, long num)
{
    int position;

    position = get_position(b, num);
    if (position > get_index(a, num))
        position = get_index(a, num) + (position - get_index(a, num));
    if (position < get_index(a, num))
        position = position + (get_index(a, num) - position);
    return (position);
}

int moove_rrr(t_list **a, t_list **b, long num)
{
    int position;

    position = ft_lstsize(b) - get_position(b, num);
    if (position > (ft_lstsize(a) - get_index(a, num)))
        position = get_index(a, num) + (position - (ft_lstsize(a) - get_index(a, num)));
    if (position < (ft_lstsize(a) - get_index(a, num)))
        position = position + ((ft_lstsize(a) - get_index(a, num)) - position);
    return (position);
}

int moove_rrarb(t_list **a, t_list **b, long num)
{
    int position;

    position = get_position(b, num);
    position += ft_lstsize(a) - get_index(a,num);
    return (position);
}

int moove_rrbra(t_list **a, t_list **b, long num)
{
    int position;

    position = get_index(a, num);
    position += ft_lstsize(b) - get_position(b, num);
    return (position);
}