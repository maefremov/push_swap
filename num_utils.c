int	check_for_int(const char *str)
{
	int				i;
	int				count;
	long long int	out;

	i = 0;
	count = 1;
	out = 0;
	if (str[i] == 45)
	{
		count *= -1;
		i++;
	}
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == '-')
			return (0);
		out = out * 10 + (str[i] - '0');
		i++;
	}
	out *= count;
	if (out < -2147483648 || out > 2147483647)
		return (0);
	return (1);
}

int	is_sorted(int *arr, int len)
{
	int	i;

	i = -1;
	while (++i < len - 1)
		if (arr[i] > arr[i + 1])
			return (0);
	return (1);
}