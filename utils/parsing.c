#include "pushswap.h"

void    get_num(t_list **a, char *num)
{
    char    **num_tab;
    t_list  **tmp;

    tmp = a;
    num_tab = ft_split(num, ' ');
    while (*num_tab)
    {
        if (is_str_num(*num_tab))
            ft_lstadd_back(tmp, ft_lstnew(ft_atoi(*num_tab)));
        else
            printf("Error - Penser a free ici (a ou tmp tout les next quoi)\n");
        num_tab++;
    }
    a = tmp;
}

void    parsing(t_list **a, char *num)
{
    get_num(a, num);
    aff_list(a);
    //printf("FIN\n");
}