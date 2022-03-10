#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	out;

	i = 0;
	count = 0;
	out = 0;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		out = out * 10 + (str[i] - '0');
		i++;
	}
	if (count % 2 == 1)
		out *= -1;
	return (out);
}
