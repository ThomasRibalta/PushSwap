/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:21:50 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:21:52 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pushswap.h"

void	pa(t_list **b, t_list **a, int i)
{
	t_list	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	ft_reset_index(a);
	ft_reset_index(b);
	if (i == -1)
		write(1, "pa\n", 3);
}
