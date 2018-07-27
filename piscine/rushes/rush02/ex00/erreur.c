/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   erreur.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 01:16:28 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 12:45:55 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "main.h"

void	erreur4(char *str, int x, int y, int i)
{
	if (x == 1 && y == 1 && str[0] == 'A')
		print04(x, y, i++);
	if (x == 1 && y == 2 && str[0] == 'A' && str[1] == 'C')
	{
		print04(x, y, i++);
		i++;
	}
	if (x == 1 && y > 2 && str[0] == 'A' && str[1] == 'B' && str[2] == 'C')
	{
		print04(x, y, i++);
		i++;
	}
	if (x == 2 && y == 1 && str[0] == 'A' && str[1] == 'C')
		print04(x, y, i++);
	if (x == 2 && y == 1 && str[0] == 'A' && str[1] == 'B' && str[2] == 'C')
		print04(x, y, i++);
	if (x == 2 && y >= 2 && str[0] == 'A'
			&& str[1] == 'C' && str[2] == 'C' && str[3] == 'A')
		print04(x, y, i++);
	if (i == 0)
		ft_putstr("aucune");
	ft_putstr("\n");
}

void	erreur3(char *str, int x, int y, int i)
{
	if (x == 1 && y == 1 && str[0] == 'A')
	{
		print03(x, y, i++);
		i++;
	}
	if (x == 1 && y == 2 && str[0] == 'A' && str[1] == 'A')
		print03(x, y, i++);
	if (x == 1 && y > 2 && str[0] == 'A' && str[1] == 'B' && str[2] == 'A')
		print03(x, y, i++);
	if (x == 2 && y == 1 && str[0] == 'A' && str[1] == 'C')
		print03(x, y, i++);
	if (x >= 2 && y == 1 && str[0] == 'A' && str[1] == 'B' && str[2] == 'C')
		print03(x, y, i++);
	if (x == 2 && y >= 2 && str[0] == 'A' &&
			str[1] == 'C' && str[2] == 'A' && str[3] == 'C')
		print03(x, y, i++);
	erreur4(str, x, y, i);
}

void	erreur2(char *str, int x, int y, int i)
{
	if (x == 1 && y == 1 && str[0] == 'A')
	{
		print02(x, y, i++);
		i++;
	}
	if (x == 1 && y == 2 && str[0] == 'A' && str[1] == 'C')
	{
		print02(x, y, i++);
		i++;
	}
	if (x == 1 && y > 2 && str[0] == 'A' && str[1] == 'B' && str[2] == 'C')
	{
		print02(x, y, i++);
		i++;
	}
	if (x == 2 && y == 1 && str[0] == 'A' && str[1] == 'A')
		print02(x, y, i++);
	if (x == 2 && y == 1 && str[0] == 'A' && str[1] == 'B' && str[2] == 'A')
		print02(x, y, i++);
	if (x == 2 && y >= 2 && str[0] == 'A' &&
			str[1] == 'A' && str[2] == 'C' && str[3] == 'C')
		print02(x, y, i++);
	erreur3(str, x, y, i);
}

void	erreur1(char *str, int x, int y, int i)
{
	if (x == 1 && y == 1 && str[0] == '/')
		print01(x, y, i++);
	if (x == 1 && y == 2 && str[0] == '/' && str[1] == '\\')
		print01(x, y, i++);
	if (x == 1 && y > 2 && str[0] == '/' && str[1] == '*' && str[2] == '\\')
		print01(x, y, i++);
	if (x == 2 && y == 1 && str[0] == '/' && str[1] == '\\')
		print01(x, y, i++);
	if (x > 2 && y == 1 && str[0] == '/' &&
			str[1] == '*' && str[2] == '\\')
		print01(x, y, i++);
	if (x == 2 && y >= 2 && str[0] == '/' &&
			str[1] == '\\' && str[2] == '\\' && str[3] == '/')
		print01(x, y, i++);
	erreur2(str, x, y, i);
}

void	erreur0(char *str, int x, int y, int i)
{
	if (x == 1 && y == 1 && str[0] == 'o')
		print00(x, y, i++);
	if (x == 1 && y == 2 && str[0] == 'o' && str[1] == 'o')
		print00(x, y, i++);
	if (x == 1 && y > 2 && str[0] == 'o' && str[1] == '|' && str[2] == 'o')
		print00(x, y, i++);
	if (x == 2 && y == 1 && str[0] == 'o' && str[1] == 'o')
		print00(x, y, i++);
	if (x > 2 && y == 1 && str[0] == 'o' && str[1] == '-' && str[2] == 'o')
		print00(x, y, i++);
	if (x == 2 && y >= 2 && str[0] == 'o' &&
			str[1] == 'o' && str[2] == 'o' && str[3] == 'o')
		print00(x, y, i++);
	erreur1(str, x, y, i);
}
