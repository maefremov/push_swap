#include "push_swap.h"

char	*ft_strjoin_space(char *s1, char *s2)
{
	char	*s;
	char	*tmp;

	s = ft_strjoin(s1, " ");
	tmp = s;
	s = ft_strjoin(s, s2);
	free(tmp);
	return (s);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
