/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:44:18 by thoribal          #+#    #+#             */
/*   Updated: 2023/11/28 20:13:56 by toto             ###   ########.fr       */
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

void	aff_list(t_list *lsta, t_list *lstb)
{
	t_list *tmp1;
	t_list *tmp2;

	tmp1 = lsta;
	tmp2 = lstb;
	while ((tmp1 && tmp1->next) || (tmp2 && tmp2->next))
	{
		if (tmp1)
		{
			printf("  %d   ", tmp1->num);			
			tmp1 = tmp1->next;
		}
		if (tmp2)
		{	
			printf("e  %d  ", tmp2->num);  
			tmp2 = tmp2->next;
		}
		printf("\n");
	}
	if (tmp1)
		printf("  %d   ", tmp1->num);
	if (tmp2)
		printf("  %d  \n", tmp2->num);
	printf("\n--A-- --B--\n");
}
