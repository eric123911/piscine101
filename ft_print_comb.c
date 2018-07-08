/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 10:51:11 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 08:30:10 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putcomb(char o, int x, int y, int z)
{
	if (o == 'd')
	{
		ft_putchar(x + 48);
		ft_putchar(y + 48);
		ft_putchar(z + 48);
	}
	else if (o == 'c')
	{
		if ((x < y) && (y < z))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 1;
	z = 2;
	while (x != 9)
	{
		if (z == 10)
		{
			y++;
			z = 0;
		}
		if (y == 9)
		{
			x++;
			y = 0;
		}
		if ((x < y) && (y < z))
			ft_putcomb('d', x, y, z);
		if (x != 7)
			ft_putcomb('c', x, y, z);
		z++;
	}
}
