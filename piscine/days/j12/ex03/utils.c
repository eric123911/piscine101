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

char	*itoh_putbase(int nb, int i, char *ret)
{
 	if (nb > 15)
		ret[i] = g_hbase[nb % 16];
	else
		ret[i] = g_hbase[nb];
	return (ret);
}

void	itoh(int nb)
{
  	int	i;
	char	*hex;

	i = hexlen(nb) + 1;
	hex = malloc(sizeof(char) * i);
	i = 0;
	if (nb == 0)
		while (i < 2)
			hex[i++] = '0';
	if (nb <= 15 && nb != 0)
	{
		hex[i] = '0';
		hex[++i] = g_hbase[nb % 16];
		i++;
		nb /= 16;
	}
	while (nb != 0)
	{
		hex = itoh_putbase(nb, i, hex);
		nb /= 16;
		i++;
	}
	hex[++i] = '\0';
	ft_putstr(ft_strrev(hex));
}
