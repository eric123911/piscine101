
#include "main.h"

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	  len++;
	write(1, str, len);
}

void	ft_head(char *str)
{
	ft_putstr("==> ");
	ft_putstr(str);
	ft_putstr(" <==\n")
}

int	ft_tail()
{
	int	i;
}

int	main(int ac, char **av)
{

	return (0);
}
