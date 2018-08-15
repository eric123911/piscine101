/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 14:52:29 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 18:49:16 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

void	ft_puterr(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	write(2, str, len);
}

void	ft_print_err(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	ft_puterr("cat: ");
	ft_puterr(str);
	if (len >= 256)
	{
		ft_puterr(": File name too long\n");
		return ;
	}
	if (errno == 2)
		ft_puterr(": No such file or directory\n");
	if (errno == 9)
		ft_puterr(": Bad file number\n");
	if (errno == 13)
		ft_puterr(": Permission denied\n");
	if (errno == 21)
		ft_puterr(": Is a directory\n");
	if (errno == 22)
		ft_puterr(": Invalid argument\n");
	if (errno == 26)
		ft_puterr(": Text file busy\n");
}

void	ft_read_stdin(void)
{
	char	c;

	while (1)
	{
		read(0, &c, BUF_SIZE);
		write(1, &c, BUF_SIZE);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	fd;
	int	ret;
	char	buf[BUF_SIZE];

	i = 1;
	errno = 0;
	if (argc == 1)
		ft_read_stdin();
	while (argv[i])
	{
		errno = 0;
		fd = open(argv[i], O_RDWR);
		if (fd >= 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE) && errno == 0))
				ft_putstr(buf);
			close(fd);
		}
		else
			ft_print_err(argv[i]);
		fd >= 0 ? buf[ret] = '\0' : 0;
		i++;
	}
	return (0);
}
