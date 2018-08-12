#include "hexdump.h"

void	print_rcol(char *fname)
{
	int	c;
	int     fd;
        int     ret;
        char    buf[BUF_SIZE + 1];

	c = 0;
	fd = open(fname, O_RDONLY);
	if (fd >= 0)
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			if (c % 16 == 0)
				ft_putstr("|");
			if (ft_char_is_printable(buf[0]) == 0)
			  ft_putstr(".");
			else
			  ft_putstr(buf);
			if (c % 16 == 15)
				ft_putstr("|\n");
			c++;
		}
		if (c % 16 != 15)
		  ft_putstr(|);
		buf[ret] = '\0';
		close(fd);
	}
}
