#include "hexdump.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (*str)
        {
                i++;
                str++;
        }
        return (i);
}

void    ft_putstr(char *str)
{
        write(1, str, ft_strlen(str));
}

char	*ft_strrev(char *str)
{
	char	c;
	int	i;
	int	j;

	j = 0;
	while (str[j])
		j++;
	i = -1;
	while (++i < --j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
	return (str);
}
