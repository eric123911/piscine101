/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 12:57:39 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 13:20:18 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb *= nb;
		i++;
	}
	return (nb);
}
