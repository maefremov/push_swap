/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:01:07 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 19:01:09 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	size_t			i;

	i = -1;
	str = (const char *)s;
	while (++i < n)
		if (str[i] == (char)c)
			return ((void *)(s + i));
	return (0);
}
