/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:45:16 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:45:32 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s);
	c = malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	while (++i < len)
		c[i] = *(s + start + i);
	c[len] = '\0';
	return (c);
}
