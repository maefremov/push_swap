int	ft_isalnum(int c)
{
	if ((char)c >= '0' && (char)c <= '9')
		return (1);
	if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	if ((char)c >= 'a' && (char)c <= 'z')
		return (1);
	return (0);
}
