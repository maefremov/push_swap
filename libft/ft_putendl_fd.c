#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = -1;
	if (s)
	{
		while (s[++i] != '\0')
			write(fd, &s[i], 1);
		write(fd, "\n", 1);
	}
}
