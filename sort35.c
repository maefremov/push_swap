#include "push_swap.h"

int	get_min(t_stack *stack)
{
	t_stack	*tmp;
	int		min;

	min = 2147483647;
	tmp = stack;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

int	get_max(t_stack *stack)
{
	t_stack	*tmp;
	int		max;

	max = -2147483647;
	tmp = stack;
	while (tmp)
	{
		if (tmp->value > max)
			max = tmp->value;
		tmp = tmp->next;
	}
	return (max);
}

void	sort_three(t_alg *alg)
{
	int	min;
	int	max;

	min = get_min(alg->a);
	max = get_max(alg->a);
	if (alg->a->value == min && alg->a->next->value == max)
	{
		sa_sb(&alg->a, 'a');
		ra_rb(&alg->a, 'a');
	}
	if (alg->a->value != min && alg->a->value != max
		&& alg->a->next->value == max)
		rra_rrb(&alg->a, 'a');
	if (alg->a->value != min && alg->a->value != max
		&& alg->a->next->value == min)
		sa_sb(&alg->a, 'a');
	if (alg->a->value == max && alg->a->next->value == min)
		ra_rb(&alg->a, 'a');
	if (alg->a->value == max && alg->a->next->value != min
		&& alg->a->next->value != max)
	{
		sa_sb(&alg->a, 'a');
		rra_rrb(&alg->a, 'a');
	}
}

void	sort_five(t_alg *alg, int n)
{
	if (alg->a->value == 1 || alg->a->value == 2)
	{
		pa_pb(&alg->a, &alg->b, 'b');
		n++;
	}
	else if (alg->a->next->value == 1 || alg->a->next->value == 2)
	{
		sa_sb(&alg->a, 'a');
		pa_pb(&alg->a, &alg->b, 'b');
		n++;
	}
	else
		rra_rrb(&alg->a, 'a');
	if (n < 2)
		sort_five(alg, n);
	else
	{
		sort_three(alg);
		if (alg->b->value < alg->b->next->value)
			sa_sb(&alg->b, 'b');
		pa_pb(&alg->b, &alg->a, 'a');
		pa_pb(&alg->b, &alg->a, 'a');
	}
}
