/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:21:58 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:22:00 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pushswap.h"

void	pb(t_list **b, t_list **a, int i)
{
	t_list	*tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	ft_reset_index(a);
	ft_reset_index(b);
	if (i == -1)
		write(1, "pb\n", 3);
}
