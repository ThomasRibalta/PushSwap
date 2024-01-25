/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:44:18 by thoribal          #+#    #+#             */
/*   Updated: 2023/12/11 16:01:07 by toto             ###   ########.fr       */
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
	new->index = 0;
	new->prev = NULL;
	return (new);
}

void	aff_list(t_list **lsta, t_list **lstb)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *lsta;
	tmp2 = *lstb;
	while ((tmp1 && tmp1->next) || (tmp2 && tmp2->next))
	{
		printf("  %ld     %ld  \n", (tmp1) ? tmp1->num : 0,
			(tmp2) ? tmp2->num : 0);
		if (tmp1)
			tmp1 = tmp1->next;
		if (tmp2)
			tmp2 = tmp2->next;
	}
	printf("  %ld     %ld  \n", (tmp1) ? tmp1->num : 0, (tmp2) ? tmp2->num : 0);
	printf("\n--A-- --B--\n");
}
