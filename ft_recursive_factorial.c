/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 12:44:04 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 13:12:41 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb < 0)
		return (0);
	else
		return (1);
}
