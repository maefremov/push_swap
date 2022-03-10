#include "push_swap.h"

static int	get_max(t_stack **stack)
{
	t_stack	*first;
	int		index;
	int		max;
	int		i;

	max = 0;
	i = 0;
	first = *stack;
	index = 0;
	while (first)
	{
		if (first->value > max)
		{
			max = first->value;
			index = i;
		}
		i++;
		first = first->next;
	}
	return (index);
}

static void	butt_to_a(t_alg	*alg)
{
	while (alg->b)
	{
		if (get_max(&alg->b) == 0)
			pa_pb(&alg->b, &alg->a, 'a');
		else if (get_max(&alg->b) < stack_length(&alg->b) / 2)
			ra_rb(&alg->b, 'b');
		else
			rra_rrb(&alg->b, 'b');
	}
}

static void	butterfly(t_alg *alg, int len)
{
	int	n;
	int	counter;

	counter = 1;
	if (len <= 100)
		n = 15;
	else
		n = 30;
	while (alg->a)
	{
		if (alg->a->value <= counter)
		{
			pa_pb(&alg->a, &alg->b, 'b');
			ra_rb(&alg->b, 'b');
			counter++;
		}
		else if (alg->a->value <= counter + n)
		{
			pa_pb(&alg->a, &alg->b, 'b');
			counter++;
		}
		else
			ra_rb(&alg->a, 'a');
	}
	butt_to_a(alg);
}

void	start_sort(t_alg *alg, int len)
{
	if (len <= 3)
		sort_three(alg);
	else if (len <= 5)
		sort_five(alg, 0);
	else
		butterfly(alg, len);
}
