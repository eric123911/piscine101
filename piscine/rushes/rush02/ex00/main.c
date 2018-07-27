/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:24:18 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:26:01 by wsayad      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void	detection(char *str, int x, int y, int i)
{
	char	*str4;
	int		id;

	id = 0;
	str4 = malloc(sizeof(str) * 6 + 1);
	str4 = "ABCCA";
	while (str[id] == str4[id] && x > 2 && y > 2)
		id++;
	if (id == 5)
		print04(x, y, i++);
	erreur0(str, x, y, i);
}

void	detection1(char *str, int x, int y, int i)
{
	char	*str02;
	char	*str3;
	int		id;

	str02 = malloc(sizeof(*str) * 6 + 1);
	str02 = "ABACC";
	str3 = malloc(sizeof(*str) * 6 + 1);
	str3 = "ABCAC";
	id = 0;
	while (str[id] == str02[id] && x > 2 && y > 2)
		id++;
	if (id >= 4 && x > 2 && y > 2)
		print02(x, y, i++);
	id = 0;
	while (str[id] == str3[id] && x > 2 && y > 2)
		id++;
	if (id == 5)
		print03(x, y, i++);
	id = 0;
	detection(str, x, y, i);
}

void	detection2(char *str, int x, int y, int i)
{
	char	*str00;
	char	*str1;
	int		id;

	str00 = malloc(sizeof(*str) * 6 + 1);
	str00 = "o-ooo";
	str1 = malloc(sizeof(*str) * 6 + 1);
	str1 = "/*\\\\/";
	id = 0;
	while (str[id] >= str00[id])
		id++;
	if (id >= 4 && x > 2 && y > 2)
		print00(x, y, i++);
	id = 0;
	while (str[id] == str1[id])
		id++;
	if (id == 5 && x > 2 && y > 2)
		print01(x, y, i++);
	detection1(str, x, y, i);
}

void	stread(int i, int d, int x, int y)
{
	char buf[1];
	char tab[5];

	while (read(0, buf, 1))
	{
		if (*buf == 'A' || *buf == 'C' ||
				*buf == 'o' || *buf == '/' || *buf == '\\')
		{
			tab[d] = *buf;
			d++;
		}
		else if ((*buf == 'B' || *buf == '*' ||
					*buf == '-' || *buf == '|') && d < 2)
		{
			tab[d] = buf[0];
			d++;
		}
		if (*buf == '\n')
			y++;
		x++;
	}
	if (x != 0 && y != 0)
		x = x / y - 1;
	detection2(tab, x, y, i);
}

int		main(void)
{
	int i;
	int d;
	int x;
	int y;

	d = 0;
	x = 0;
	y = 0;
	i = 0;
	stread(i, d, x, y);
	return (0);
}
