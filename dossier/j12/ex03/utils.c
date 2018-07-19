/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   utils.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 15:43:11 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 19:35:15 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strrev(char *str)
{
	int		c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
		i++;
		j--;
	}
	return (str);
}

char	*ft_gethexa(int nb)
{
	int		i;
	int		stock_nb;
	char	*hex;
	char	*tab;

	i = 0;
	stock_nb = nb;
	tab = (char*)malloc(sizeof(char) * 17);
	tab = "0123456789abcdef\0";
	if (nb == 0)
		return ("0");
	while (nb != 0 || i++)
		nb /= 16;
	hex = (char*)malloc(sizeof(char) * (i++));
	i = 0;
	while (stock_nb != 0)
	{
		hex[i] = tab[stock_nb % 16];
		stock_nb /= 16;
		i++;
	}
	hex[i] = '\0';
	return (ft_strrev(hex));
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("\n\n\n%s", ft_gethexa(atoi(argv[1])));
	return (0);
}

