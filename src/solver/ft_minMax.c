/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minMax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:25:34 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:25:35 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/header/pushswap.h"

int	ft_min(t_list *lst)
{
	int	tmp;

	tmp = lst->num;
	while (lst)
	{
		if (lst->num < tmp)
			tmp = lst->num;
		lst = lst->next;
	}
	return (tmp);
}

int	ft_max(t_list *lst)
{
	int	tmp;

	tmp = lst->num;
	while (lst)
	{
		if (lst->num > tmp)
			tmp = lst->num;
		lst = lst->next;
	}
	return (tmp);
}
