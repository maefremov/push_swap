#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	size;
	char	*bg;

	i = 0;
	bg = (char *)big;
	size = ft_strlen(little);
	if (size == 0 || big == little)
		return (bg);
	while (bg[i] != '\0' && i < len)
	{
		c = 0;
		while (bg[i + c] != '\0' && little[c] != '\0'
				&& bg[i + c] == little[c] && i + c < len)
			c++;
		if (c == size)
			return (bg + i);
		i++;
	}
	return (0);
}
