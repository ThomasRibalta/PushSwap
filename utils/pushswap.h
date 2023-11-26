#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stdio.h>

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
void    parsing(t_list **a, char *num);
void NewFunction(t_list ** a);
void aff_list(t_list **lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int	is_str_num(char *str);

# endif