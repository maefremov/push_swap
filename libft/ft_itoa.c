#include "libft.h"

static char	*ft_rev(char *c)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = ft_strlen(c);
	while (i < len / 2)
	{
		temp = c[i];
		c[i] = c[len - i - 1];
		c[len - i - 1] = temp;
		i++;
	}
	return(c);
}

static char	*ft_func(int n, char *c)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	if (n == 0)
	{
		c[0] = '0';
		i++;
	}
	if (n < 0)
		neg = -1;
	while (n != 0)
	{
		c[i++] = n % 10 * neg + '0';
		n /= 10;
	}
	if (neg == -1)
		c[i++] = '-';
	c[i] = '\0';
	return (ft_rev(c));
}

char *ft_itoa(int n)
{
	int		len;
	int		nbr;
	char	*c;

	len = 0;
	if (n < 0)
		len++;
	nbr = n;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	if (n == 0)
		len = 1;
	if (!(c = malloc(sizeof(char) * (len + 1))))
		return 0;
	return (ft_func(n, c));
}
