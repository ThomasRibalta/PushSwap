#include "utils/pushswap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	if (ac < 2 || (ac == 2 && !av[1][0]))
		return (0);
	else if (ac == 2)
		parsing(&a, ft_split(av[1], ' '), 1);
	else
		parsing(&a, av + 1, 0);
	if (!is_sort(a))
		sort(&a);
	free_lst(&a);
}
