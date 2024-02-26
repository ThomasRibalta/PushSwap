#include "../utils/header/pushswap.h"

int makeB_rr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_positionB(b, nb);
  while ((*a)->num != nb && positionB-- > 0)
     rr(a, b);
  while ((*a)->num != nb)
    ra(a, -1);
  while (positionB-- > 0)
    rb(b, -1);
  pb(b, a);
  return (-1);
}

int makeB_rrr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(*b) - get_positionB(b, nb);
  while ((*a)->num != nb && positionB-- > 0)
    rrr(a, b);
  while ((*a)->num != nb)
    rra(a, -1);
  while (positionB-- > 0)
    rrb(b, -1);
  pb(b, a);
  return (-1);
}

int makeB_rrarb(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_positionB(b, nb);
  while (positionB-- > 0)
    rb(b, -1);
  while ((*a)->num != nb)
    rra(a, -1);
  pb(a, b);
  return (-1);
}

int makeB_rrbra(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(*b) - get_positionB(b, nb);
  while (positionB-- > 0)
    rrb(b, -1);
  while ((*a)->num != nb)
    ra(a, -1);
  pb(b, a);
  return (-1);
}