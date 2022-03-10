#include "push_swap.h"

int	ss(t_stack **a, t_stack **b)
{
	sa_sb(a, 'n');
	sa_sb(b, 'n');
	write(1, "ss\n", 3);
	return (0);
}

int	rr(t_stack **a, t_stack **b)
{
	ra_rb(a, 'n');
	ra_rb(b, 'n');
	write(1, "rr\n", 3);
	return (0);
}

int	rrr(t_stack **a, t_stack **b)
{
	rra_rrb(a, 'n');
	rra_rrb(b, 'n');
	write(1, "rrr\n", 4);
	return (0);
}
