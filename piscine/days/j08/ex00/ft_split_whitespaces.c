/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 00:01:16 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 11:14:29 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_assignword(char **tab, char *str, int i, int x)
{
	int	j;

	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\t' &&
					str[j] != '\n' && str[j] != '\0')
				j++;
			tab[x] = (char*)malloc(sizeof(**tab) * (j - i + 1));
			i += j - i - 1;
			x++;
		}
		i++;
	}
}

void	ft_tabcpy(char **tab, char *str, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			j = i;
			y = 0;
			while (str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
			{
				tab[x][y] = str[j];
				j++;
				y++;
			}
			tab[x][y] = '\0';
			i = j - 1;
			x++;
		}
		i++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		x;
	int		y;
	char	**tab;

	i = 0;
	j = 1;
	while (str[i] && !(str[i] == ' ' && str[i] == '\t' && str[i] == '\n'))
	{
		i++;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			j++;
	}
	if (!(tab = (char**)malloc(sizeof(*tab) * (j + 1))))
		return (NULL);
	i = 0;
	x = 0;
	y = 0;
	ft_assignword(tab, str, i, x);
	ft_tabcpy(tab, str, x, y);
	tab[x] = 0;
	i = 0;
	while (tab[i])
	{
		printf("%i\n", i);
		i++;
	}
	return (tab);
}

int		main(int ac, char **av)
{

	if (ac != 2)
		return (0);
	ft_split_whitespaces(av[1]);
}
