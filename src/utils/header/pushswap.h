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
int					get_best_mooveB(t_list **a, t_list **b);
void				final_sort_b(t_list **b);
int					get_best_mooveA(t_list **a, t_list **b);
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
void				aff_list(t_list **lsta, t_list **lstb);
void				pb(t_list **b, t_list **a);
void				pa(t_list **b, t_list **a);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstfirst(t_list *lst);
int					is_str_num(char *str);
int					get_positionB(t_list **b, long num);
int					ft_isdigit(int c);
int					get_positionA(t_list **a, long num);
int					makeB_rr(t_list **a, t_list **b, int nb);
int					makeB_rrr(t_list **a, t_list **b, int nb);
int					makeB_rrarb(t_list **a, t_list **b, int nb);
int					makeB_rrbra(t_list **a, t_list **b, int nb);
int					makeA_rr(t_list **a, t_list **b, int nb);
void				small_sort_3_reverse(t_list **b);
int					makeA_rrr(t_list **a, t_list **b, int nb);
int					is_int(long int nb);
int					makeA_rrarb(t_list **a, t_list **b, int nb);
int					makeA_rrbra(t_list **a, t_list **b, int nb);
int					get_index(t_list **lst, long num);
int					mooveB_rr(t_list **a, t_list **b, long num);
int					mooveB_rrr(t_list **a, t_list **b, long num);
int					mooveB_rrarb(t_list **a, t_list **b, long num);
int					mooveB_rrbra(t_list **a, t_list **b, long num);
int					mooveA_rr(t_list **a, t_list **b, long num);
int					mooveA_rrr(t_list **a, t_list **b, long num);
int					mooveA_rrarb(t_list **a, t_list **b, long num);
int					mooveA_rrbra(t_list **a, t_list **b, long num);
#endif
