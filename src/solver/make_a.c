#include "../utils/header/pushswap.h"

int makeA_rr(t_list **a, t_list **b, int nb)
{
  int  positionA;

  positionA = get_positionA(a, nb);
  while ((*b)->num != nb &&  positionA-- > 0)
    rr(a, b);
  while ((*b)->num != nb)
    rb(b, -1);
  while (positionA-- > 0)
    ra(a, -1);
  pa(b, a);
  return (-1);
}

int makeA_rrr(t_list **a, t_list **b, int nb)
{
  int  positionA ;

  positionA = ft_lstsize(*a) - get_positionA(a, nb);
  while ((*b)->num != nb &&  positionA-- > 0)
    rrr(a, b);
  while ((*b)->num != nb)
    rrb(b, -1);
  while (positionA-- > 0)
    rra(a, -1);
  pa(b, a);
  return (-1);
}

int makeA_rrarb(t_list **a, t_list **b, int nb)
{
  int  positionA;

  positionA = get_positionA(a, nb);
  while (positionA-- > 0)
    ra(a, -1);
  while ((*b)->num != nb)
    rrb(b, -1);
  pa(b, a);
  return (-1);
}

int makeA_rrbra(t_list **a, t_list **b, int nb)
{
  int  positionA;

  positionA = ft_lstsize(*a) - get_positionA(a, nb);
  while (positionA-- > 0)
    rra(a, -1);
  while ((*b)->num != nb)
    rb(b, -1);
  pa(b, a);
  return (-1);
}