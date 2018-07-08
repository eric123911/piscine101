/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_reverse_alphabet.c                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 10:18:01 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 08:25:44 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i > 96)
	{
		ft_putchar(i);
		i--;
	}
}
