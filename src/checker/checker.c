/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:25:22 by toto              #+#    #+#             */
/*   Updated: 2024/04/19 09:21:15 by thoribal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/header/pushswap.h"

void	erreur(t_list **a, t_list **b, int n, char *buffer)
{
	if (n == -1)
		write(1, "KO\n", 3);
	else
	{
		write(1, "Error\n", 6);
		free(buffer);
	}
	buffer = get_next_line (0, 0);
	free(buffer);
	while (ft_lstsize(*b) > 0)
	{
		pa(b, a, 0);
	}
	free_lst(a);
	exit(0);
}

void	succes(t_list **a, t_list **b)
{
	write(1, "OK\n", 3);
	free_lst(a);
	free_lst(b);
	exit(0);
}

void	exec_moove(char *buffer, t_list **a, t_list **b)
{
	if (!ft_strcmp("sa\n", buffer))
		sa(a, 0);
	else if (!ft_strcmp("sb\n", buffer))
		sb(b, 0);
	else if (!ft_strcmp("pa\n", buffer))
		pa(b, a, 0);
	else if (!ft_strcmp("pb\n", buffer))
		pb(b, a, 0);
	else if (!ft_strcmp("rr\n", buffer))
		rr(a, b, 0);
	else if (!ft_strcmp("rra\n", buffer))
		rra(a, 0);
	else if (!ft_strcmp("rrb\n", buffer))
		rrb(b, 0);
	else if (!ft_strcmp("ra\n", buffer))
		ra(a, 0);
	else if (!ft_strcmp("rb\n", buffer))
		rb(b, 0);
	else if (!ft_strcmp("rrr\n", buffer))
		rrr(a, b, 0);
	else if (!ft_strcmp("ss\n", buffer))
		ss(a, b, 0);
	else
		erreur(a, b, 0, buffer);
}

void	checker(t_list **a, t_list **b)
{
	char	*buffer;

	buffer = get_next_line(0, 1);
	while (buffer && buffer[0] != '\n')
	{
		exec_moove(buffer, a, b);
		free(buffer);
		buffer = get_next_line(0, 1);
	}
	free(buffer);
	if (!is_sort(*a))
		erreur(a, b, -1, buffer);
	else if (ft_lstsize(*b) > 0)
		erreur(a, b, -1, buffer);
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
