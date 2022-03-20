/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:55:56 by blino             #+#    #+#             */
/*   Updated: 2022/03/14 17:55:57 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);

char	*ft_new_buff(char *buffer);
char	*ft_get_line(char *buffer);
char	*ft_strjoing(char *s1, char *s2);
char	*ft_strchrg(char *str, int c);
size_t	ft_strleng(char *s);

#endif
