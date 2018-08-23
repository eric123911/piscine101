/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 10:46:56 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 18:39:46 by eschnell    ###    #+. /#+    ###.fr     */
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
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc == 2)
		return (1);
	else
	{
		write(2, "Too many arguments.\n", 20);
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
		if (fd >= 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE)))
				ft_putstr(buf);
			buf[ret] = '\0';
			close(fd);
		}
		return (0);
	}
}
