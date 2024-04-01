/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:23:36 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:23:37 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pushswap.h"

void	rrb(t_list **b, int n)
{
	t_list	*tmp;
	int		last;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	last = ft_lstlast(*b)->num;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	while (tmp->next->num != last)
		tmp = tmp->next;
	tmp->next = NULL;
	if (n == -1)
		write(1, "rrb\n", 4);
}
