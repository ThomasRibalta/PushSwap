#include "../utils/header/pushswap.h"

int   get_best_mooveB(t_list **a, t_list **b)
{
    int numTmp;
    t_list *tmp;

    tmp = *a;
    numTmp = mooveB_rr(a, b, tmp->num);
    while (tmp)
    {
        if (numTmp > mooveB_rr(a, b, tmp->num))
            numTmp = mooveB_rr(a, b, tmp->num);
        if (numTmp > mooveB_rrr(a, b, tmp->num))
            numTmp = mooveB_rrr(a, b, tmp->num);
        if (numTmp > mooveB_rrarb(a, b, tmp->num))
            numTmp = mooveB_rrarb(a, b, tmp->num);
        if (numTmp > mooveB_rrbra(a, b, tmp->num))
            numTmp = mooveB_rrbra(a, b, tmp->num);
        tmp = tmp->next;
    }
    return (numTmp);
}

int   get_best_mooveA(t_list **a, t_list **b)
{
    int numTmp;
    t_list *tmp;

    tmp = *b;
    numTmp = mooveA_rr(a, b, tmp->num);
    while (tmp)
    {
        if (numTmp > mooveA_rr(a, b, tmp->num))
            numTmp = mooveA_rr(a, b, tmp->num);
        if (numTmp > mooveA_rrr(a, b, tmp->num))
            numTmp = mooveA_rrr(a, b, tmp->num);
        if (numTmp > mooveA_rrarb(a, b, tmp->num))
            numTmp = mooveA_rrarb(a, b, tmp->num);
        if (numTmp > mooveA_rrbra(a, b, tmp->num))
            numTmp = mooveA_rrbra(a, b, tmp->num);
        tmp = tmp->next;
    }
    return (numTmp);
}