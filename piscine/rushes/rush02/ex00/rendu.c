/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rendu.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 02:03:08 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 03:52:23 by wsayad      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

void	print04(int x, int y, int i)
{
	if (i > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print03(int x, int y, int i)
{
	if (i > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print02(int x, int y, int i)
{
	if (i > 0)
		ft_putstr(" || ");
	i++;
	ft_putstr("[colle-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print01(int x, int y, int i)
{
	if (i > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-01] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	print00(int x, int y, int i)
{
	if (i > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-00] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}
