#include "push_swap.h"

static int	*atoi_arr(char **sarr, int len)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * len);
	i = -1;
	while (++i < len)
		arr[i] = ft_atoi(sarr[i]);
	return (arr);
}

void	free_sarr(char **sarr)
{
	int	i;

	i = 0;
	while (sarr[i])
	{
		free(sarr[i]);
		i++;
	}
	free(sarr[i]);
	free(sarr);
}

int	get_arr(char *str, int **arr)
{
	char	**sarr;
	int		len;

	len = 0;
	sarr = ft_split(str, ' ');
	while (sarr[len])
		len++;
	*arr = atoi_arr(sarr, len);
	free_sarr(sarr);
	return (len);
}
