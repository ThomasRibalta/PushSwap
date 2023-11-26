/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:44:18 by thoribal          #+#    #+#             */
/*   Updated: 2023/11/26 20:40:46 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_lstnew(int nb)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->num = nb;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	aff_list(t_list **lst)
{
	t_list *tmp;

	tmp = *lst;
	while (tmp && tmp->next)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->num);
}
