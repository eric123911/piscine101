/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush03.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 10:47:40 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 16:33:01 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "rush.h"

void	ft_print(char a, char b, char c, int x)
{
	int i_x;

	i_x = 0;
	while (i_x++ < x)
	{
		if (i_x == 1)
			ft_putchar(a);
		else if (i_x != x)
			ft_putchar(b);
		else
			ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i_y;

	i_y = 0;
	while (i_y++ < y)
	{
		if (i_y == 1)
			ft_print('A', 'B', 'C', x);
		else if (i_y != y)
			ft_print('B', ' ', 'B', x);
		else
			ft_print('A', 'B', 'C', x);
	}
}
