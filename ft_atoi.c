/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 17:24:03 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:35:13 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int			atoi_sign(char *str)
{
	int		i;
	int		s;

	i = 0;
	s = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	return (s);
}

int			ft_atoi(char *str)
{
	int		i;
	int		sign;
	unsigned int	nb_total;

	i = 0;
	nb_total = 0;
	sign = atoi_sign(str);
	while (str[i] < 33)
		i++;
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			nb_total = nb_total * 10 + (str[i] - 48);
		else if (str[i] != '+' || str[i] != '-')
			while (str[i])
				i++;
		i++;
	}
	return (nb_total * sign);
}

int			main()
{
	printf("%i", ft_atoi("42"));
	return (0);
}
