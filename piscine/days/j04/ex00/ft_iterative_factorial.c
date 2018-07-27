/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_interative_factorial.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 12:33:15 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 13:10:57 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0 || nb > 25)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i > 0)
		{
			nb *= i;
			i--;
		}
		return (nb);
	}
}
