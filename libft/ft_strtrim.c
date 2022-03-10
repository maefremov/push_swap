#include "libft.h"

static int		is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set))
		start++;
	if (start == ft_strlen(s1))
	{
		if (!(s = ft_strdup("")))
			return (0);
		return (s);
	}
	while (is_in_set(s1[end - 1], set))
		end--;
	s = ft_substr(s1, start, end - start);
	return (s);
}
