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
