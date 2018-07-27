/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 17:41:04 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 18:20:34 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print(char c)
{
	if (c == 's')
		ft_putchar('/');
	else if (c == 'e')
		ft_putchar('*');
	else if (c == 'a')
		ft_putchar('\\');
	else if (c == 'd')
		ft_putchar(' ');
	else if (c == 'n')
		ft_putchar('\n');
}

void		ft_printoneline(i, j, x, y)
{
	while (i <= x)
		{
			if (i == x && j == y && j > 1)
				ft_print('s');
			else if (i == 1 && j == 1)
				ft_print('s');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_print('a');
			else if ((i == 1 || i == x) && (j > 1 && j < y)) 
				ft_print('e');
			else if ((j == 1 || j == y) && (i > 1 && i < x))
				ft_print('e');
			else
				ft_print('d');
			i++;
		}
	ft_print('n');
}

void		ft_printline(int j, int x, int y)
{
	int	i;
	int	k;
	int	l;

	i = 1;
	k = i;
	l = x;
	while (k <= y)
	{
		i = 1;
		ft_printoneline(i, j, x, y);
		j++;
		k++;
	}
}

void		ft_printcolumn(int j, int y)
{
	while (j <= y)
	{
		if (j == 1)
			ft_print('s');
		else if (j == y)
			ft_print('a');
		else
			ft_print('e');
		ft_print('n');
		j++;
	}
}

void		rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x <= 0 || y <= 0)
		i++;
	else if (x == 1 && y == 1)
	{
		ft_print('s');
		ft_print('n');
	}
	else if (y == 1)
		ft_printoneline(i, j, x, y);
	else if (x == 1)
		ft_printcolumn(i, y);
	else
		ft_printline(j, x, y);
}
