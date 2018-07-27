/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 16:08:50 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 08:50:04 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_absolute_diff(int min, int max)
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
	table = NULL;
	diff = ft_absolute_diff(min, max);
	table = (int*)malloc(sizeof(*table) * (diff));
	if (min >= max)
		return (table);
	while (i < diff + 1)
	{
		table[i] = min;
		i++;
		min++;
	}
	table[i] = '\0';
	return (table);
}
