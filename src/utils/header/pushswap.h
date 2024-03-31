#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../GetNextLine/get_next_line.h"

typedef struct s_list
{
	int				num;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

void				ft_reset_index(t_list **lst);
void				sort(t_list **a);
t_list				*ft_lstnew(int nb);
int					ft_lstsize(t_list *lst);
int					is_sort(t_list *a);
void				check_dooble(t_list **a);
int					is_reverse_sort(t_list *b);
void				parsing(t_list **a, char **num, int n);
int					get_best_mooveb(t_list **a, t_list **b);
void				final_sort_b(t_list **b);
int					get_best_moovea(t_list **a, t_list **b);
void				small_sort_3(t_list **a);
void				rra(t_list **a, int n);
void				ra(t_list **a, int n);
void				rrb(t_list **a, int n);
void				rb(t_list **a, int n);
void				rrr(t_list **a, t_list **b);
void				rr(t_list **a, t_list **b);
void				free_lst(t_list **b);
void				ss(t_list **a, t_list **b);
void				sa(t_list **a);
void				sb(t_list **b);
int					ft_min(t_list *lst);
int					ft_max(t_list *lst);
void				pb(t_list **b, t_list **a);
void				pa(t_list **b, t_list **a);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstfirst(t_list *lst);
int					is_str_num(char *str);
int					get_positionb(t_list **b, long num);
int					ft_isdigit(int c);
int					get_positiona(t_list **a, long num);
int					makeb_rr(t_list **a, t_list **b, int nb);
int					makeb_rrr(t_list **a, t_list **b, int nb);
int					makeb_rrarb(t_list **a, t_list **b, int nb);
int					makeb_rrbra(t_list **a, t_list **b, int nb);
int					makea_rr(t_list **a, t_list **b, int nb);
void				small_sort_3_reverse(t_list **b);
int					makea_rrr(t_list **a, t_list **b, int nb);
int					is_int(long int nb);
int					makea_rrarb(t_list **a, t_list **b, int nb);
int					makea_rrbra(t_list **a, t_list **b, int nb);
int					get_index(t_list **lst, long num);
int					mooveb_rr(t_list **a, t_list **b, long num);
int					mooveb_rrr(t_list **a, t_list **b, long num);
int					mooveb_rrarb(t_list **a, t_list **b, long num);
int					mooveb_rrbra(t_list **a, t_list **b, long num);
int					moovea_rr(t_list **a, t_list **b, long num);
int					moovea_rrr(t_list **a, t_list **b, long num);
int					moovea_rrarb(t_list **a, t_list **b, long num);
int					moovea_rrbra(t_list **a, t_list **b, long num);
#endif
