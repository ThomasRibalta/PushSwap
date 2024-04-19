/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:27:04 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:27:06 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/pushswap.h"

void	free_split(char **num)
{
	int	i;

	i = 0;
	while (num[i])
	{
		free(num[i]);
		i++;
	}
	free(num);
}

void	get_num(t_list **a, char **num, int n)
{
	t_list	**tmp;
	int	i;

	tmp = a;
	i = 0;
	while (num[i])
	{
		if (is_str_num(num[i]) && is_int(ft_atoi(num[i])))
			ft_lstadd_back(tmp, ft_lstnew((int)ft_atoi(num[i])));
		else
		{
			write(2, "Error\n", 6);
			if (n)
				free_split(num);
			free_lst(tmp);
		}
		i++;
	}
	a = tmp;
}

void	parsing(t_list **a, char **num, int n)
{
	get_num(a, num, n);
	if (n)
		free_split(num);
	check_dooble(a);
}
