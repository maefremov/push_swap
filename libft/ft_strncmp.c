/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:50:04 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:50:11 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (!n)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]) && (i < n - 1))
		++i;
	a = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (a);
}
