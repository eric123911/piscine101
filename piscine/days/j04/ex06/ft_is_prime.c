/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:30:42 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 21:43:30 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while ((i * i) < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int		ft_is_prime(int nb)
{
	int	i;
	int	div;
	int	sqrt;
	int	stock_nb;

	i = 2;
	stock_nb = nb;
	while (ft_sqrt(nb) == 0)
		nb--;
	sqrt = nb;
	while (i < sqrt)
	{
		div = stock_nb / i;
		if ((div * i) == stock_nb)
			return (0);
		i++;
	}
	return (1);
}
