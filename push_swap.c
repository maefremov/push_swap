/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:56:40 by blino             #+#    #+#             */
/*   Updated: 2022/03/14 18:49:03 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	err_ret(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*arg_str;
	int		*args;
	int		size;
	t_alg	*alg;

	if (argc < 2)
		return (0);
	arg_str = get_arg_line(argc, argv);
	if (!check_args(arg_str))
	{
		free(arg_str);
		return (err_ret());
	}
	size = get_arr(arg_str, &args);
	free(arg_str);
	if (!is_sorted(args, size) || size < 2)
	{		
		alg = init_stacks(args, size);
		start_sort(alg, size);
		free_alg(alg);
	}
	else
		free(args);
	return (0);
}
