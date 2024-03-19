#include "../utils/header/pushswap.h"

int makeA_rr(t_list **a, t_list **b, int nb)
{
  while ((*b)->num != nb &&  get_positionA(a, nb) > 0)
    rr(a, b);
  while ((*b)->num != nb)
    rb(b, -1);
  while (get_positionA(a, nb) > 0)
    ra(a, -1);
  pa(b, a);
  return (-1);
}

int makeA_rrr(t_list **a, t_list **b, int nb)
{
  while ((*b)->num != nb &&  get_positionA(a, nb) > 0)
    rrr(a, b);
  while ((*b)->num != nb)
    rrb(b, -1);
  while (get_positionA(a, nb) > 0)
    rra(a, -1);
  pa(b, a);
  return (-1);
}

int makeA_rrarb(t_list **a, t_list **b, int nb)
{
  while (get_positionA(a, nb) > 0)
    ra(a, -1);
  while ((*b)->num != nb)
    rrb(b, -1);
  pa(b, a);
  return (-1);
}

int makeA_rrbra(t_list **a, t_list **b, int nb)
{
  while (get_positionA(a, nb) > 0)
    rra(a, -1);
  while ((*b)->num != nb)
    rb(b, -1);
  pa(b, a);
  return (-1);
}