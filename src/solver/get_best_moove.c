/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_best_moove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 13:25:45 by toto              #+#    #+#             */
/*   Updated: 2024/04/01 13:25:47 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/header/pushswap.h"

int	get_best_mooveb(t_list **a, t_list **b)
{
	int		numtmp;
	t_list	*tmp;

	tmp = *a;
	numtmp = mooveb_rrr(a, b, tmp->num);
	while (tmp)
	{
		if (numtmp > mooveb_rr(a, b, tmp->num))
			numtmp = mooveb_rr(a, b, tmp->num);
		if (numtmp > mooveb_rrr(a, b, tmp->num))
			numtmp = mooveb_rrr(a, b, tmp->num);
		if (numtmp > mooveb_rrbra(a, b, tmp->num))
			numtmp = mooveb_rrbra(a, b, tmp->num);
		if (numtmp > mooveb_rrarb(a, b, tmp->num))
			numtmp = mooveb_rrarb(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (numtmp);
}

int	get_best_moovea(t_list **a, t_list **b)
{
	int		numtmp;
	t_list	*tmp;

	tmp = *b;
	numtmp = moovea_rr(a, b, tmp->num);
	while (tmp)
	{
		if (numtmp > moovea_rr(a, b, tmp->num))
			numtmp = moovea_rr(a, b, tmp->num);
		if (numtmp > moovea_rrr(a, b, tmp->num))
			numtmp = moovea_rrr(a, b, tmp->num);
		if (numtmp > moovea_rrarb(a, b, tmp->num))
			numtmp = moovea_rrarb(a, b, tmp->num);
		if (numtmp > moovea_rrbra(a, b, tmp->num))
			numtmp = moovea_rrbra(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (numtmp);
}
