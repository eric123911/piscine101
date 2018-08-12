#include "hexdump.h"

char	g_hbase[16] = "0123456789abcdef";

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_char_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	else
		return (1);
}

char	*atohex(int nb)
{
	int	i;
 	int	st;
	char	*hex;

	i = 0;
	st = nb;
	hex = malloc(sizeof(char) * 3);
	while (nb != 0)
	{
		if (nb > 15)
			hex[i] = g_hbase[nb / 16];
		else if (st == nb && nb <= 15)
		{
			hex[i] = '0';
			hex[++i] = g_hbase[nb % 16];
		}
		else
			hex[i] = g_hbase[st % 16];
		nb /= 16;
		i++;
	}
	hex[i] = '\0';
	return (hex);
}
