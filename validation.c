#include "push_swap.h"

static int	check_doubles(char **line)
{
	int	i;
	int	j;

	i = 0;
	while (line[i])
	{
		j = i + 1;
		while (line[j])
		{
			if (ft_strcmp(line[i], line[j]) != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	free_and_rtn(char **line, int rtn)
{
	free_sarr(line);
	return (rtn);
}

int	check_args(char *arg_line)
{
	char	**sarr;
	int		i;

	i = 0;
	while (arg_line[i])
	{
		if (!(arg_line[i] == ' ' || arg_line[i] == '-'
				|| (arg_line[i] >= '0' && arg_line[i] <= '9')))
			return (0);
		i++;
	}
	sarr = ft_split(arg_line, ' ');
	i = -1;
	if (!check_doubles(sarr))
		return (free_and_rtn(sarr, 0));
	while (sarr[++i])
		if (!check_for_int(sarr[i]))
			return (free_and_rtn(sarr, 0));
	return (free_and_rtn(sarr, 1));
}
