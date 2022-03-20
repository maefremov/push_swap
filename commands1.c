/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:55:04 by blino             #+#    #+#             */
/*   Updated: 2022/03/14 17:55:05 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ss(t_stack **a, t_stack **b, char st)
{
	if (!sa_sb(a, 'n'))
		return (0);
	if (!sa_sb(b, 'n'))
		return (0);
	if (st)
		write(1, "ss\n", 3);
	return (1);
}

int	rr(t_stack **a, t_stack **b, char st)
{
	if (!ra_rb(a, 'n'))
		return (0);
	if (!ra_rb(b, 'n'))
		return (0);
	if (st)
		write(1, "rr\n", 3);
	return (1);
}

int	rrr(t_stack **a, t_stack **b, char st)
{
	if (!rra_rrb(a, 'n'))
		return (0);
	if (!rra_rrb(b, 'n'))
		return (0);
	if (st)
		write(1, "rrr\n", 4);
	return (1);
}
