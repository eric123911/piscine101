/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 08:35:20 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 17:52:12 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_put_spc(char o)
{
	if (o == 'x')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else if (o == 'y')
		ft_putchar(' ');
}

void	ft_put_num(char o, char n, char r)
{
	if (o == 'a')
	{
		ft_putchar(n + 48);
		ft_putchar(r + 48);
		ft_put_spc('x');
	}
	else if (o == 'b')
	{
		ft_putchar(48);
		ft_putchar(n + 48);
		ft_put_spc('x');
	}
	else if (o == 'c')
	{
		ft_putchar(n + 48);
		ft_putchar(r + 48);
		ft_put_spc('y');
	}
	else if (o == 'd')
	{
		ft_putchar(48);
		ft_putchar(n + 48);
		ft_put_spc('y');
	}
}

void	ft_put_final(char n, char r)
{
}

void	ft_print_comb2(void)
{
	int	m;
	int	n;
	int r;
	int nb_save;

	m = 0;
	n = 1;
	while (m != 100)
	{
		if (n > 99)
		{
			m++;
			n = m + 1;
		}
		if (n > m)
		{
			/*
			nb_save = n;
			n = n / 10;
			r = nb_save % 10;
			n = nb_save;
			*/
			if (n > 9)
			{
				nb_save = n;
				n = n / 10;
				r = nb_save % 10;
				ft_put_num('a', n, r);
				n = nb_save;
			}
			else
				ft_put_num('b', n, '.');
			nb_save = m;
			m = m / 10;
			r = nb_save % 10;
			m = nb_save;
			if (m > 9)
			{
				nb_save = m;
				m = m / 10;
				r = nb_save % 10;
				ft_put_num('c', m, r);
				m = nb_save;
			}
			else
				ft_put_num('d', m, '.');
		}
		n++;
	}
}
