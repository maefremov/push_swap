#include "push_swap.h"

int	ss(t_stack **a, t_stack **b, char st)
{
	sa_sb(a, 'n');
	sa_sb(b, 'n');
	if (st)
		write(1, "ss\n", 3);
	return (1);
}

int	rr(t_stack **a, t_stack **b, char st)
{
	ra_rb(a, 'n');
	ra_rb(b, 'n');
	if (st)
		write(1, "rr\n", 3);
	return (1);
}

int	rrr(t_stack **a, t_stack **b, char st)
{
	rra_rrb(a, 'n');
	rra_rrb(b, 'n');
	if (st)
		write(1, "rrr\n", 4);
	return (1);
}
