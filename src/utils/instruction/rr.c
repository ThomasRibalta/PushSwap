/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:22:23 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:22:24 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/pushswap.h"

void	rr(t_list **a, t_list **b, int i)
{
	ra(a, 0);
	rb(b, 0);
	if (i == -1)
		write(1, "rr\n", 3);
}
