#include "utils/pushswap.h"

int main(int ac, char **av)
{
    t_list  *a;
    t_list  *b;

    a = NULL;
    b = NULL;
    if (ac != 2)
        return (0);
    parsing(&a, av[1]);
    if (ft_lstsize(a) <= 100)
        small_sort(a, b);
}