/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_div_mod.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 19:35:02 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 19:35:32 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	div = a / b;
	mod = a % b;
}