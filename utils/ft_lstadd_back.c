/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:04:40 by thoribal          #+#    #+#             */
/*   Updated: 2023/12/11 11:05:00 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->prev = ft_lstlast(*lst);
		ft_lstlast(*lst)->next = new;
		ft_lstlast(*lst)->next->index = ft_lstlast(*lst)->index + 1;

	}
	else
		*lst = new;
}
