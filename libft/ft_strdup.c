/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:53:58 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:54:11 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	size_t	len;

	len = ft_strlen(s) + 1;
	c = malloc(sizeof(char) * len);
	if (!c)
		return (NULL);
	return (ft_memcpy(c, s, len));
}
