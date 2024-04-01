/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:26:04 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:26:05 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/header/pushswap.h"

int	makea_rr(t_list **a, t_list **b, int nb)
{
	while ((*b)->num != nb && get_positiona(a, nb) > 0)
		rr(a, b);
	while ((*b)->num != nb)
		rb(b, -1);
	while (get_positiona(a, nb) > 0)
		ra(a, -1);
	pa(b, a);
	return (-1);
}

int	makea_rrr(t_list **a, t_list **b, int nb)
{
	while ((*b)->num != nb && get_positiona(a, nb) > 0)
		rrr(a, b);
	while ((*b)->num != nb)
		rrb(b, -1);
	while (get_positiona(a, nb) > 0)
		rra(a, -1);
	pa(b, a);
	return (-1);
}

int	makea_rrarb(t_list **a, t_list **b, int nb)
{
	while (get_positiona(a, nb) > 0)
		ra(a, -1);
	while ((*b)->num != nb)
		rrb(b, -1);
	pa(b, a);
	return (-1);
}

int	makea_rrbra(t_list **a, t_list **b, int nb)
{
	while (get_positiona(a, nb) > 0)
		rra(a, -1);
	while ((*b)->num != nb)
		rb(b, -1);
	pa(b, a);
	return (-1);
}
