/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:45:45 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:48:04 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set))
		start++;
	if (start == ft_strlen(s1))
	{
		s = ft_strdup("");
		if (!s)
			return (0);
		return (s);
	}
	while (is_in_set(s1[end - 1], set))
		end--;
	s = ft_substr(s1, start, end - start);
	return (s);
}
