/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:52:21 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:53:19 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s2)
		return (ft_strdup(s1));
	if (!s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (!s)
		return (NULL);
	ft_memmove(s, s1, s1_len);
	ft_memmove(s + s1_len, s2, s2_len);
	s[s1_len + s2_len] = '\0';
	return (s);
}
