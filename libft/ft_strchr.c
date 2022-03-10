char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while ((*str != (char)c) && (*str))
		str++;
	if (*(str) == (char)c)
		return (str);
	return (0);
}
