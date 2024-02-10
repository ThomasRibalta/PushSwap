#include "pushswap.h"

int   get_best_moove(t_list **a, t_list **b, int num)
{
    int numTmp;
    t_list *tmp;

    tmp = *a;
    numTmp = moove_rr(a, b, tmp->num);
    while (tmp)
    {
        if (numTmp > moove_rr(a, b, tmp->num))
            numTmp = moove_rr(a, b, tmp->num);
        if (numTmp > moove_rrr(a, b, tmp->num))
            numTmp = moove_rrr(a, b, tmp->num);
        if (numTmp > moove_rrarb(a, b, tmp->num))
            numTmp = moove_rrarb(a, b, tmp->num);
        if (numTmp > moove_rrbra(a, b, tmp->num))
            numTmp = moove_rrbra(a, b, tmp->num);
        tmp = tmp->next;
    }
    return (numTmp);
}

int   get_best_moove2(t_list **a, t_list **b, int num)
{
    int numTmp;
    t_list *tmp;

    tmp = *b;
    numTmp = moove_rr(b, a, tmp->num);
    aff_list(a, b);
    printf("\n%d dd\n", numTmp);
    while (tmp)
    {
        if (numTmp > moove_rr(b, a, tmp->num))
        {
            numTmp = moove_rr(b, a, tmp->num);
            printf("a %d\n", numTmp);
        }
        if (numTmp > moove_rrr(b, a, tmp->num))
        {
            numTmp = moove_rrr(b, a, tmp->num);
            printf("b %d\n", numTmp);
        }
        if (numTmp > moove_rrarb(b, a, tmp->num))
        {
            numTmp = moove_rrarb(b, a, tmp->num);
            printf("c %d\n", numTmp);
        }
        if (numTmp > moove_rrbra(b, a, tmp->num))
        {
            numTmp = moove_rrbra(b, a, tmp->num);
            printf("d %d\n", numTmp);
        }
        tmp = tmp->next;
    }
    return (numTmp);
}