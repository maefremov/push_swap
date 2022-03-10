#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	size_t	len;

	len = ft_strlen(s) + 1;
	c = malloc(sizeof(char) * len);
	return (ft_memcpy(c, s, len));
}
