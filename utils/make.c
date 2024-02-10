#include "pushswap.h"

int make_rr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_position(b, nb);
  printf("%d/%d\n", positionB, nb);
  while ((*a)->num != nb && positionB-- != 0)
     rr(a, b);
  while ((*a)->num != nb)
    ra(a, -1);
  while (positionB-- != 0)
    rb(b, -1);
  pb(b, a);
  return (-1);
}

int make_rrr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(*b) - get_position(b, nb);
  while ((*a)->num != nb && positionB-- != 0)
    rrr(a, b);
  while ((*a)->num != nb)
    rra(a, -1);
  while (positionB-- != 0)
    rrb(b, -1);
  pb(b, a);
  return (-1);
}

int make_rrarb(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_position(b, nb);;
  while (positionB-- != 0)
    rb(b, -1);
  while ((*a)->num != nb)
    rra(a, -1);
  pb(a, b);
  return (-1);
}

int make_rrbra(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(*b) - get_position(b, nb);
  while (positionB-- != 0)
    rrb(b, -1);
  while ((*a)->num != nb)
    ra(a, -1);
  pa(a, b);
  return (-1);
}