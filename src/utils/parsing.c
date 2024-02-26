#include "header/pushswap.h"

void	get_num(t_list **a, char **num)
{
	t_list	**tmp;

	tmp = a;
	while (*num)
	{
		if (is_str_num(*num))
			ft_lstadd_back(tmp, ft_lstnew(ft_atoi(*num)));
		else
			printf("Error - Penser a free ici (a ou tmp tout les next quoi)\n");
		num++;
	}
	a = tmp;
}

void	free_split(char **num)
{
	int	i;

	i = 0;
	while(num[i])
	{
		free(num[i]);
		i++;
	}
	free(num);
}

void	parsing(t_list **a, char **num, int n)
{
	get_num(a, num);
	if (n)
		free_split(num);
}
