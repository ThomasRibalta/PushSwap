/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:22:29 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:23:30 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pushswap.h"

void	rra(t_list **a, int n)
{
	t_list	*tmp;
	int		last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	last = ft_lstlast(*a)->num;
	*a = ft_lstlast(*a);
	(*a)->next = tmp;
	while (tmp->next->num != last)
		tmp = tmp->next;
	tmp->next = NULL;
	if (n == -1)
		write(1, "rra\n", 4);
}
