/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 14:52:29 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 18:17:59 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

void    ft_puterr(char *str)
{
        int     len;

        len = 0;
        while (str[len])
                len++;
        write(2, str, len);
}

void	ft_print_err(int index, char **argv)
{
	ft_puterr("ft_cat: ");
	ft_putstr(argv[index]);
	ft_putstr(": No such file or directory\n");
}

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	int		errno;
	char	buf[BUF_SIZE];

	i = 1;
	errno = 0;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		errno = 0;
		fd = open(argv[i], 0x0000);
		if (fd >= 0)
		{
			while ((ret = read(fd, buf, BUF_SIZE) && errno == 0))
				ft_putstr(buf);
		}
		else
		  ft_print_err(i, argv);
		//buf[ret] = '\0';
		close(fd);
		i++;
	}
	return (0);
}
