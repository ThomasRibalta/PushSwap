/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:27:18 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:27:19 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/pushswap.h"

void	free_lst(t_list **b)
{
	t_list	*current;
	t_list	*next;

	current = *b;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*b = NULL;
	exit(1);
}

void	ft_reset_index(t_list **lst)
{
	t_list	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}

int	get_index(t_list **lst, long num)
{
	t_list	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		if (tmp->num == num)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (0);
}

void	check_dooble(t_list **a)
{
	t_list	*tmp;
	t_list	*lst;

	lst = *a;
	while (lst && lst->next)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->num == tmp->num)
			{
				write(2, "Error\n", 6);
				free_lst(a);
			}
			tmp = tmp->next;
		}
		lst = lst->next;
	}
}

int	is_int(long int nb)
{
	if (nb < -2147483648 || nb > 2147483647)
		return (0);
	return (1);
}
