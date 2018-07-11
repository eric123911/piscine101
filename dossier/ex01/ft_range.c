/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 16:08:50 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 20:09:05 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_diff(int min, int max)
{
	int	difference;

	difference = max - min;
	if (difference < 0)
		difference *= -1;
	return (difference);
}

int		*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*table;

	i = 0;
	diff = ft_diff(min, max);
	table = (int*)malloc(sizeof(*table) * (diff + 1));
	if (min >= max)
	{
		table = (void *)0;
		return (table);
	}
	while (i < diff + 1)
	{
		table[i] = min;
		i++;
		min++;
	}
	table[i] = '\0';
	return (table);
}
