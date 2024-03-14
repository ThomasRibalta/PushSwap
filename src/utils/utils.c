#include "header/pushswap.h"

void free_lst(t_list **b)
{
    t_list *current = *b;
    t_list *next;

    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *b = NULL;
    exit(1);
}

void	ft_reset_index(t_list **lst){
	t_list *tmp;
	int	i;
	
	tmp = *lst;
	i = 0;
	while (tmp)
  {
		tmp->index = i;
	 	tmp = tmp->next;
		i++;
	}
}

int get_index(t_list **lst, long num){
    t_list *tmp;
    
    tmp = *lst;
    while (tmp)
    {
        if (tmp->num == num)
            return (tmp->index);
        tmp = tmp->next;
    }
    return (0);
}

void check_dooble(t_list **a)
{
    t_list *tmp;
    t_list *lst;

    lst = *a;
	while (lst && lst->next)
	{
        tmp = lst->next;
        while (tmp)
        {
            if (lst->num == tmp->num)
            {
                printf("Error\n");
                free_lst(a);
            }
            tmp = tmp->next;
        }
		lst = lst->next;
	}
}