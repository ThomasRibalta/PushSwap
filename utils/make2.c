#include "pushswap.h"

int make2_rr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_position(a, nb);
  //printf("position : %d rr, b : %d/%d\n", positionB, (*b)->num, nb);
  while ((*b)->num != nb && positionB-- != 0)
    rr(a, b);
  while ((*b)->num != nb)
    rb(b, -1);
  while (positionB-- != 0)
    ra(a, -1);
  pa(b, a);
  aff_list(a, b);
  return (-1);
}

int make2_rrr(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(*a) - get_position(a, nb);
  printf("position : %d rrr\n", positionB);
  while ((*a)->num != nb && positionB-- != 0)
    rrr(a, b);
  while ((*a)->num != nb)
    rrb(b, -1);
  while (positionB-- != 0)
    rra(a, -1);
  pa(b, a);
  return (-1);
}

int make2_rrarb(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = get_position(a, nb);
  printf("position : %d rrarb\n", positionB);
  while (positionB-- != 0)
    ra(a, -1);
  while ((*b)->num != nb)
    rrb(b, -1);
  pa(b, a);
  return (-1);
}

int make2_rrbra(t_list **a, t_list **b, int nb)
{
  int positionB;

  positionB = ft_lstsize(*a) - get_position(a, nb);
  printf("position : %d rrbra\n", positionB);
  while (positionB-- != 0)
    rra(a, -1);
  while ((*b)->num != nb)
    rb(b, -1);
  pa(b, a);
  ra(a, -1);
  return (-1);
}