#include "../utils/header/pushswap.h"

int ft_min(t_list *lst)
{
    int		tmp;

	tmp = lst->num;
	while (lst)
	{
		if (lst->num < tmp)
			tmp = lst->num;
		lst = lst->next;
	}
	return (tmp);
}

int ft_max(t_list *lst)
{
    int		tmp;

	tmp = lst->num;
	while (lst)
	{
		if (lst->num > tmp)
			tmp = lst->num;
		lst = lst->next;
	}
	return (tmp);
}