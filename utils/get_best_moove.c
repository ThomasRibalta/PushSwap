#include "pushswap.h"

int   get_best_moove(t_list **a, t_list **b, int num)
{
    int numTmp;
    t_list *tmp;

    tmp = *a;
    numTmp = moove_rr(a, b, tmp->num);
    while (tmp)
    {
        if (numTmp > moove_rr(a, b tmp->num))
            numTmp = moove_rr(a, b, tmp->num);
        if (numTmp > moove_rrr(a, b tmp->num))
            numTmp = moove_rrr(a, b, tmp->num);
        if (numTmp > moove_rrarb(a, b tmp->num))
            numTmp = moove_rrarb(a, b, tmp->num);
        if (numTmp > moove_rrbra(a, b tmp->num))
            numTmp = moove_rrbra(a, b, tmp->num);
        tmp = tmp->next;
    }
    return (numTmp);
}