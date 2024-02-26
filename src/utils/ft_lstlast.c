/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:32:38 by thoribal          #+#    #+#             */
/*   Updated: 2023/12/11 16:23:44 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/pushswap.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

t_list	*ft_lstfirst(t_list *lst)
 {
 	while (lst && lst->prev)
 	{
 		lst = lst->prev;
 	}
 	return (lst);
}