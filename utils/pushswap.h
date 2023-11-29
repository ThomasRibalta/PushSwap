#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
    int num;
    int pos;
    struct s_list *next;
    struct s_list *prev;
    
} t_list;

char	**ft_split(char *s, char c);
int ft_atoi(const char *str);
t_list	*ft_lstnew(int nb);
int	ft_lstsize(t_list *lst);
int	is_sort_one(t_list *lst);
void    is_sort(t_list *a, t_list *b);
void    parsing(t_list **a, char *num);
void    small_sort(t_list *a, t_list *b);
void    rra(t_list *a);
void    sa(t_list *a);
void    sb(t_list *b);
void	aff_list(t_list *lsta, t_list *lstb);
void    pb(t_list **b, t_list *a);
void    pa(t_list **b, t_list **a);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int	is_str_num(char *str);

# endif
