/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 10:46:56 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 15:45:04 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

int		check_params(int argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc == 2)
		return (1);
	else
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (check_params(argc) != 1)
		return (1);
	else
	{
		fd = open(argv[1], 0x0000);
		if (fd == -1)
		{
			ft_putstr("open() error\n");
			return (1);
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
			ft_putstr(buf);
		buf[ret] = '\0';
		if (close(fd) == -1)
		{
			ft_putstr("close() error\n");
			return (1);
		}
		return (0);
	}
}
