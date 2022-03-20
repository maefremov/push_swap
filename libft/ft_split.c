/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:54:44 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:54:46 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static char	**ft_mal(char **rtn, char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			rtn[count] = malloc(sizeof(char) * (j + 1));
			i += j;
			count++;
		}
	}
	return (rtn);
}

static char	**ft_fill(char **rtn, char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
			{
				rtn[count][j] = (char)s[i + j];
				j++;
			}				
			rtn[count++][j] = '\0';
			i += j;
		}
	}
	return (rtn);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	int		i;
	int		size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_count(s, c);
	rtn = malloc(sizeof(char *) * (size + 1));
	rtn[size] = 0;
	rtn = ft_mal(rtn, s, c);
	rtn = ft_fill(rtn, s, c);
	return (rtn);
}
