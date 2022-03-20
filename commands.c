/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:54:46 by blino             #+#    #+#             */
/*   Updated: 2022/03/14 17:54:47 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa_sb(t_stack **head, char st)
{
	t_stack	*tmp;
	int		a;

	tmp = *head;
	if (tmp && tmp->next)
	{
		a = tmp->value;
		tmp->value = tmp->next->value;
		tmp->next->value = a;
		if (st == 'a')
			write(1, "sa\n", 3);
		else if (st == 'b')
			write(1, "sb\n", 3);
	}
	else
		return (0);
	return (1);
}

int	pa_pb(t_stack **stack1, t_stack **stack2, char st)
{
	t_stack	*from;
	t_stack	*to;
	t_stack	*tmp;

	from = *stack1;
	to = *stack2;
	if (!from)
		return (0);
	tmp = from;
	from = from->next;
	*stack1 = from;
	tmp->next = to;
	*stack2 = tmp;
	if (st == 'a')
		write(1, "pa\n", 3);
	else if (st == 'b')
		write(1, "pb\n", 3);
	return (1);
}

int	ra_rb(t_stack **stack, char st)
{
	t_stack	*tmp;
	t_stack	*old_head;
	t_stack	*new_head;

	old_head = *stack;
	if (!(old_head && old_head->next))
		return (0);
	new_head = old_head->next;
	tmp = new_head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = old_head;
	old_head->next = NULL;
	*stack = new_head;
	if (st == 'a')
		write(1, "ra\n", 3);
	else if (st == 'b')
		write(1, "rb\n", 3);
	return (1);
}

int	rra_rrb(t_stack **stack, char st)
{
	t_stack	*tmp;
	t_stack	*head;
	t_stack	*pre_last;
	t_stack	*last;

	head = *stack;
	if (!(head && head->next))
		return (0);
	tmp = head;
	while (tmp->next)
	{
		if (tmp->next->next == NULL)
			pre_last = tmp;
		tmp = tmp->next;
	}
	last = tmp;
	last->next = head;
	pre_last->next = NULL;
	*stack = last;
	if (st == 'a')
		write(1, "rra\n", 4);
	else if (st == 'b')
		write(1, "rrb\n", 4);
	return (1);
}
