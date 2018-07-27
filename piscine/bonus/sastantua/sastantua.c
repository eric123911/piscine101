/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sastantua.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 21:52:34 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:57:17 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		ft_mini_atoi(char *str)
{
	int	i;
	int nb_total;

	i = 0;
	nb_total = 0;
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			nb_total = nb_total * 10 + (str[i] - 48);
		else
		{
			while (str[i])
				i++;
		}
		i++;
	}
	return (nb_total);
}

int		main(int argc, char **argv)
{
	int	i;

	i = argc;
	printf("%i", ft_mini_atoi(argv[1]));
	return (0);
}
