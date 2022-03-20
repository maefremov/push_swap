/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:55:24 by blino             #+#    #+#             */
/*   Updated: 2022/03/14 17:55:25 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(void)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->value = -1;
	new->next = NULL;
	return (new);
}

void	delete_stack(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*deleted;

	tmp = *head;
	while (tmp)
	{
		deleted = tmp;
		tmp = tmp->next;
		free(deleted);
	}
	*head = NULL;
}

t_stack	*parse_args_in_stack(int *args)
{
	int		i;
	t_stack	*head;
	t_stack	*tmp;

	head = create_node();
	tmp = head;
	i = 0;
	while (args[i + 1])
	{
		tmp->value = args[i];
		tmp->next = create_node();
		tmp = tmp->next;
		i++;
	}
	tmp->value = args[i];
	tmp->next = NULL;
	return (head);
}

int	stack_length(t_stack **stack)
{
	t_stack	*tmp;
	int		len;

	len = 0;
	tmp = *stack;
	if (!(tmp && tmp->next))
		return (0);
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}

void	free_alg(t_alg *alg)
{
	delete_stack(&alg->a);
	delete_stack(&alg->b);
	free(alg);
}
