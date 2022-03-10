#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t src_len;
	size_t dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (size == 0)
		return (src_len);
	if (size < dst_len)
		return (src_len + size);
	while (src[j] && (dst_len + j) < size)
		dst[i++] = src[j++];
	if ((dst_len + j) == size && dst_len < size)
		dst[i - 1] = '\0';
	else
		dst[i] = '\0';
	return (src_len + dst_len);
}
