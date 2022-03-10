#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	i;

	i = -1;
	if (!s)
		return 0;
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	c = malloc(sizeof(char) * (len + 1));
	if (!c)
		return (0);
	while (++i < len)
		c[i] = *(s + start + i);
	c[len] = '\0';
	return (c);
}
