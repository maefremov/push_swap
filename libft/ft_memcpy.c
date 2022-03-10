#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tempd;
	const char	*temps;
	size_t			i;

	i = -1;
	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	tempd = (unsigned char *)dest;
	temps = (const char *)src;
	while (++i < n)
		tempd[i] = temps[i];
	dest = tempd;
	return (dest);
}
