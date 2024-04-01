/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:24:47 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:24:48 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pushswap.h"

void	ss(t_list **a, t_list **b)
{
	int	tmp;

	if (ft_lstsize(*a) < 2 || ft_lstsize(*b) < 2)
		return ;
	tmp = (*a)->num;
	(*a)->num = (*a)->next->num;
	(*a)->next->num = tmp;
	tmp = (*b)->num;
	(*b)->num = (*b)->next->num;
	(*b)->next->num = tmp;
	write(1, "ss\n", 3);
}
