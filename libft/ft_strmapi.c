/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:50:24 by blino             #+#    #+#             */
/*   Updated: 2021/10/27 18:50:36 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rtn;

	i = -1;
	if (!s)
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	rtn = ft_strdup(s);
	if (!rtn)
		return (NULL);
	while (s[++i])
		rtn[i] = f(i, s[i]);
	return (rtn);
}
