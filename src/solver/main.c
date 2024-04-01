/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:25:57 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:26:01 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/header/pushswap.h"

int	main(int ac, char **av)
{
	t_list	*a;

	a = NULL;
	if (ac < 2 || (ac == 2 && !av[1][0]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (ac == 2)
		parsing(&a, ft_split(av[1], ' '), 1);
	else
		parsing(&a, av + 1, 0);
	if (!is_sort(a))
		sort(&a);
	free_lst(&a);
}
