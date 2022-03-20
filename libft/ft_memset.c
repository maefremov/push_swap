/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:57:03 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:57:04 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*temp;
	size_t			i;

	i = -1;
	temp = (unsigned char *)dest;
	while (++i < count)
		temp[i] = c;
	dest = temp;
	return (dest);
}
