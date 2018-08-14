#include "hexdump.h"

char	g_hbase[16] = "0123456789abcdef";

int	ft_char_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	else
		return (1);
}

int	hexlen(int nb)
{
    	int	i;
 
	i = 1;
	while (nb != 0)
	{
		nb /= 16;
		i++;
	}
	return (--i);
}

void	itoh(int nb)
{
  	int	i;
 	int	st;
	char	*hex;

	i = 1;
	st = nb;
	while (nb != 0)
	{
		nb /= 256;
		i++;
	}
	hex = malloc(sizeof(char) * (i + 1));
	i = 0;
	nb = st;
	if (nb == 0)
	{
		hex[i] = '0';
		hex[i + 1] = '0';
		i += 2;
	}
	while (nb != 0)
	{
		if (nb > 15)
			hex[i] = g_hbase[nb % 16];
		else if (st == nb && nb <= 15)
		{
			hex[i] = '0';
			hex[++i] = g_hbase[nb % 16];
			i++;
		}
		else
			hex[i] = g_hbase[nb];
		nb /= 16;
		i++;
	}
	hex[i] = '\0';
	ft_putstr(ft_strrev(hex));
}
