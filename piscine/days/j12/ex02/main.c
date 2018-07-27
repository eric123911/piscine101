/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 09:33:49 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 19:47:59 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

void	ft_head(char *str)
{
	write(1, "==> ", 4);
	write(1, str, ft_strlen(str));
	write(1, " <==\n", 5);
}

int	ft_tail(char **av)
{
	int	i;

	return (i);
}

int		main(int ac, char **av)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	i = 1;
	if (ac < 2)
		return (0);
	while (av[i])
	{
		errno = 0;
		fd = open(av[i], 0x0000);
		if (fd >= 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
				printf("%s", buf);
		}
		i++;
	}
	return (0);
}
