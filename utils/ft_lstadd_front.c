/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:19:37 by thoribal          #+#    #+#             */
/*   Updated: 2023/12/11 11:07:29 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_reset_index(t_list **lst){
	t_list *tmp;

	tmp = *lst;
	tmp->index = 0;
	tmp = tmp->next;
	while (tmp)
	{
		tmp->index = tmp->prev->index + 1;
		tmp = tmp->next;
	}
	*lst = tmp;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		(*lst)->prev = new;
		new->next = *lst;
		*lst = new;
		ft_reset_index(lst);
	}
	else
		*lst = new;
}
