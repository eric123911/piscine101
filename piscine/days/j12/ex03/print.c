#include "hexdump.h"

char	*g_fn;

void	print_lcol(int i)
{
	int	j;

	j = 6;
	i / 256 > 0 ? j = j + 2 - hexlen(i) : 0;
	while (j-- > 0)
		ft_putstr("0");
	itoh(i);
}

void	print_rcol_pad(int i)
{
	int	j;
  
	j = i;
	i % 16 < 7 ? ft_putstr(" ") : 0;
	while (i % 16 != 15)
	{
		ft_putstr("   ");
		i++;
	}
	if (j % 16 != 15)
	{
		j = i;
		ft_putstr(" ");
		print_rcol(j);
		print_rcol(14);
	}
}

void	print_rcol(int i)
{
	int	fd;
	int	ret;
	char	buf[BUF_SIZE];
	int	j;
	int	k;

	j = i - 15;
	k = 0;
	fd = open(g_fn, O_RDONLY);
	if (fd >= 0)
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			if (j == -1)
			{
			  ft_putstr("|\n");
			  close(fd);
			  return ;
			}
			if (j <= i && k >= j)
			{
				j % 16 == 0 ? ft_putstr("|") : 0;
				ft_char_is_printable(buf[0]) == 0 ? ft_putstr(".") : ft_putstr(buf);
				j % 16 == 15 ? ft_putstr("|\n") : 0;
				j++;
			}
			k++;
		}
		close(fd);
	}
}

void	print_all(char *filename)
{
	int	i;
	int	fd;
	int	ret;
	char	buf[BUF_SIZE];

	i = 0;
	g_fn = filename;
	fd = open(g_fn, O_RDONLY);
	if (fd >= 0)
	{
  		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			if (i % 16 == 0)
			{
				print_lcol(i);
				ft_putstr("  ");
			}
			itoh(buf[0]);
			if (i % 16 == 15)
			{
				ft_putstr("  ");
				print_rcol(i);
			}
			else if (i % 16 == 7)
				ft_putstr("  ");
			else
				ft_putstr(" ");
			i++;
		}
		print_rcol_pad(--i);
		print_lcol(++i);
		ft_putstr("\n");
		close(fd);
	}
}
