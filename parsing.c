/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:56:33 by blino             #+#    #+#             */
/*   Updated: 2022/03/14 18:05:48 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*atoi_arr(char **sarr, int len)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * len);
	i = -1;
	while (++i < len)
		arr[i] = ft_atoi(sarr[i]);
	return (arr);
}

void	free_sarr(char **sarr)
{
	int	i;

	i = 0;
	while (sarr[i])
	{
		free(sarr[i]);
		i++;
	}
	free(sarr[i]);
	free(sarr);
}

int	get_arr(char *str, int **arr)
{
	char	**sarr;
	int		len;

	len = 0;
	sarr = ft_split(str, ' ');
	while (sarr[len])
		len++;
	*arr = atoi_arr(sarr, len);
	free_sarr(sarr);
	return (len);
}

char	*get_arg_line(int argc, char **argv)
{
	int		i;
	char	*nums;
	char	*tmp;

	i = 3;
	if (argc > 2)
	{
		nums = ft_strjoin_space(argv[1], argv[2]);
		argc -= 3;
		while (argc > 0)
		{
			tmp = nums;
			nums = ft_strjoin_space(nums, argv[i]);
			free(tmp);
			i++;
			argc--;
		}
	}
	else
		return (ft_strdup(argv[1]));
	return (nums);
}
