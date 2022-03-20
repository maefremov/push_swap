/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:56:03 by blino             #+#    #+#             */
/*   Updated: 2022/03/14 17:56:04 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*sort(int *arr, int len)
{
	int	i;
	int	temp;

	i = -1;
	while (++i < len - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
			i = -1;
		}
	}
	return (arr);
}

static int	*get_indexes(int *arr, int len)
{
	int	*indexes;
	int	*sorted;
	int	i;
	int	j;

	i = -1;
	indexes = malloc(len * sizeof(int) + 1);
	sorted = malloc(len * sizeof(int));
	while (++i < len)
		sorted[i] = arr[i];
	sorted = sort(sorted, len);
	i = -1;
	indexes[len] = 0;
	while (++i < len)
	{
		j = -1;
		while (++j < len)
			if (arr[j] == sorted[i])
				indexes[j] = i + 1;
	}
	free(arr);
	free(sorted);
	return (indexes);
}

t_alg	*init_stacks(int *arr, int len)
{
	t_alg	*alg;
	int		*indexes;

	alg = malloc(sizeof(t_alg));
	indexes = get_indexes(arr, len);
	alg->a = parse_args_in_stack(indexes);
	free(indexes);
	alg->b = NULL;
	return (alg);
}
