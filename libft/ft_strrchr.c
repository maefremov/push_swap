char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	n;

	i = -1;
	n = -1;
	while (s[++i])
	{
		if (s[i] == (char)c)
			n = i;
	}
	if (s[i] == (char)c)
			n = i;
	if (n != -1)
		return ((char *)(s + n));
	return (0);
}
