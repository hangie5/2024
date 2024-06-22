#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_getnb(int fd)
{
	int	n;
	char	c[1];
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	n = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[n] = c[0];
		read(fd, c, 1);
		n++;
	}
	return (str);
}

char	*ft_getval(int fd, char *c)
{
	int	n;
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	n = 0;
	while (c[0] != '\n')
	{
		str[n] = c[0];
		read(fd, c, 1);
		n++;
	}
	return (str);
}

t_list	*process(char *file)
{
	int	n;
	int	fd;
	char	c[1];
	t_list	*tab;
	char *tmp;

	fd = open(file, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * 33)))
		exit(1);
	n = 0;
	while (n < 32)
	{
		tab[n].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[n].val = ft_strdup(tmp);
		free(tmp);
		n++;
	}
	close(fd);
	return (tab);
}
