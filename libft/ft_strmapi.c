#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rtn;

	i = -1;
	if (!s)
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	rtn = ft_strdup(s);
	if (!rtn)
		return 0;
	while (s[++i])
		rtn[i] = f(i, s[i]);
	return (rtn);
}
