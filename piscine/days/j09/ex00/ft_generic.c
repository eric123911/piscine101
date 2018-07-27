/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_generic.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 05:27:55 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 05:37:31 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_generic(void)
{
	ft_putstr("Tut tut ; Tut tut\n");
}
