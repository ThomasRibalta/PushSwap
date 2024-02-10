#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long			num;
	long			index;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

char				**ft_split(char *s, char c);
void				ft_reset_index(t_list **lst);
void    sort(t_list **a);
int					ft_atoi(const char *str);
t_list				*ft_lstnew(int nb);
int					ft_lstsize(t_list *lst);
int					is_sort(t_list *a);
void				parsing(t_list **a, char **num, int n);
int    get_best_moove(t_list **a, t_list **b, int num);
int    get_best_moove2(t_list **a, t_list **b, int num);
void				small_sort_3(t_list **a);
void				rra(t_list **a, int n);
void				ra(t_list **a, int n);
void				rrb(t_list **a, int n);
void				rb(t_list **a, int n);
void rrr(t_list **a, t_list **b);
void rr(t_list **a, t_list **b);
void				free_lst(t_list **b);
void				sa(t_list **a);
void				sb(t_list **b);
int ft_min(t_list *lst);
int ft_max(t_list *lst);
void				aff_list(t_list **lsta, t_list **lstb);
void				pb(t_list **b, t_list **a);
void				pa(t_list **b, t_list **a);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstfirst(t_list *lst);
int					is_str_num(char *str);
long get_position(t_list **b, long num);
int make_rr(t_list **a, t_list **b, int nb);
int make_rrr(t_list **a, t_list **b, int nb);
int make_rrarb(t_list **a, t_list **b, int nb);
int make_rrbra(t_list **a, t_list **b, int nb);
int make2_rr(t_list **a, t_list **b, int nb);
int make2_rrr(t_list **a, t_list **b, int nb);
int make2_rrarb(t_list **a, t_list **b, int nb);
int make2_rrbra(t_list **a, t_list **b, int nb);
long get_index(t_list **lst, long num);
int moove_rr(t_list **a, t_list **b, long num);
int moove_rrr(t_list **a, t_list **b, long num);
int moove_rrarb(t_list **a, t_list **b, long num);
int moove_rrbra(t_list **a, t_list **b, long num);
#endif
