/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:58:02 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:58:09 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tempd;
	const char		*temps;
	size_t			i;

	i = -1;
	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	tempd = (unsigned char *)dest;
	temps = (const char *)src;
	while (++i < n)
		tempd[i] = temps[i];
	dest = tempd;
	return (dest);
}
