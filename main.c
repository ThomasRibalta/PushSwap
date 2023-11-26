#include "utils/pushswap.h"

int main(int ac, char **av)
{
    t_list  *a;
    t_list  *b;

    if (ac != 2)
        return (0);
    parsing(&a, av[1]);
}