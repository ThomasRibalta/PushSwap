#include "pushswap.h"

int make_rr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_position(b, nb);
  while ((*a)->num != nb || positionB-- != 0)
    rr(a, b);
  while ((*a)->num != nb)
    ra(a);
  while (positionB-- != 0)
    rb(b);
  pb(b, a);
  return (-1);
}

int make_rrr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(b) - get_position(b, num);
  while ((*a)->num != nb || positionB-- != 0)
    rrr(a, b);
  while ((*a)->num != nb)
    rra(a);
  while (positionB-- != 0)
    rrb(b);
  pb(b, a);
  return (-1);
}

int make_rrarb(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_position(b, num);;
  while (positionB-- != 0)
    rb(b);
  while ((*a)->num != nb)
    rra(a);
  return (-1);
}

int make_rrbra(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(b) - get_position(b, num);
  while (positionB-- != 0)
    rb(b);
  while ((*a)->num != nb)
    ra(a);
  return (-1);
}