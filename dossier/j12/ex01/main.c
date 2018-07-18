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

int		errnum(int index, char **argv)
{
	if (errno != 0)
	{
		ft_putstr(argv[0]);
		ft_putstr(": ");
		ft_putstr(argv[index]);
		ft_putstr(": ");
		if (errno == 9)
			ft_putstr("Bad file number\n");
		if (errno == 13)
			ft_putstr("Permission denied\n");
		if (errno == 21)
			ft_putstr("Is a directory\n");
		return (1);
	}
	else
		return (0);
}

int		main(int argc, char **argv)
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
		fd = open(argv[i], 0x0000 | 0x0001);
		while ((ret = read(fd, buf, BUF_SIZE) && errno == 0))
			ft_putstr(buf);
		if (errno != 0)
			errnum(i, argv);
		buf[ret] = '\0';
		close(fd);
		i++;
	}
	printf("\n\nNumero de l'erreur: %i\n", errno);	
	return (0);
}
