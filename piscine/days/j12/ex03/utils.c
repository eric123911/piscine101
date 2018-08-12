#include "hexdump.h"

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, &*str, 1);
		str++;
	}
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
	char	*hbase;

	i = 0;
	st = nb;
	hex = malloc(sizeof(char) * 3);
	hbase = "0123456789abcdef";
	while (nb != 0)
	{
		if (nb > 9)
			hex[i] = hbase[nb / 16];
		else
			hex[i] = hbase[st % 16];
		nb /= 16;
		i++;
	}
	hex[i] = '\0';
	return (hex);
}
