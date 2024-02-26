#include "../utils/header/pushswap.h"

void	erreur(t_list **a, t_list **b)
{
	write(1, "KO\n", 3);
}

void	succes(t_list **a, t_list **b)
{
	write(1, "OK\n", 3);
}

void	exec_moove(char *buffer, t_list **a, t_list **b)
{
	printf("compare: %d buffer : %s",!ft_strcmp("pb\n", buffer), buffer);
	if (!ft_strcmp("sa\n", buffer))
		sa(a);
	else if (!ft_strcmp("sb\n", buffer))
		sb(b);
	else if (!ft_strcmp("pa\n", buffer))
		pa(b, a);
	else if (!ft_strcmp("pb\n", buffer))
		pb(b, a);
	else if (!ft_strcmp("rr\n", buffer))
		rr(a, b);
	else if (!ft_strcmp("rra\n", buffer))
		rra(a, -1);
	else if (!ft_strcmp("rrb\n", buffer))
		rrb(b, -1);
	else if (!ft_strcmp("ra\n", buffer))
		ra(a, -1);
	else if (!ft_strcmp("rb\n", buffer))
		rb(b, -1);
	else if (!ft_strcmp("rrr\n", buffer))
		rrr(a, b);
	else if (!ft_strcmp("ss\n", buffer))
		ss(a, b);
	else
		erreur(a, b);
}

void	checker(t_list **a, t_list **b)
{
	char *buffer;

	buffer = get_next_line(0);
	while (buffer && buffer[0] != '\n')
	{
		exec_moove(buffer, a, b);
		free(buffer);
		buffer = get_next_line(0);
	}
	free(buffer);
	if (!is_sort(*a))
		erreur(a, b);
	else if (ft_lstsize(*b) > 0)
		erreur(a, b);
	else
		succes(a, b);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac > 1)
	{
		if (ac == 2)
			parsing(&a, ft_split(av[1], ' '), 1);
		else
			parsing(&a, av + 1, 0);
		checker(&a, &b);
	}
}