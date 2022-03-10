#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tempd;
	const char	*temps;
	size_t			i;

	i = 0;
	if (dest == src)
		return (dest);
	tempd = (char *)dest;
	temps = (char *)src;
	if (temps < tempd)
	{
		while (i++ < n)
			*(tempd + n - i)= *(temps + n - i);
		return (dest);
	}
	while (i++ < n)
		*tempd++ = *temps++;
	return (dest);
}
