/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:34:28 by blino             #+#    #+#             */
/*   Updated: 2022/01/12 17:34:30 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_to_buffer(int fd, char *buffer)
{
	char	*temp;
	int		len;

	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	len = 1;
	while (!ft_strchrg(buffer, '\n') && len != 0)
	{
		len = read(fd, temp, BUFFER_SIZE);
		if (len < 0)
		{
			free(temp);
			return (NULL);
		}
		temp[len] = '\0';
		buffer = ft_strjoing(buffer, temp);
	}
	free(temp);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*len;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_to_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	len = ft_get_line(buffer);
	buffer = ft_new_buff(buffer);
	return (len);
}
