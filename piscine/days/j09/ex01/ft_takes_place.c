/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takes_place.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 05:38:36 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 13:09:28 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*flag(int i)
{
	if (i == 0)
		return ("P.M.");
	if (i == 1)
		return ("A.M.");
	return (0);
}

void	print_hours(int hmin, int hmax, char *s1, char *s2)
{
	printf("%s %i.%s %s AND %i.%s %s\n",
			"THE FOLLOWING TAKES PLACE BETWEEN",
			hmin, "00", s1,
			hmax, "00", s2);
}

void	ft_idk(int hour)
{
	char	*f1;
	char	*f2;

	if (hour == 23)
	{
		f1 = flag(0);
		f2 = flag(1);
		print_hours(hour, hour - 23, f1, f2);
	}
	else if (hour == 12)
	{
		f1 = flag(0);
		print_hours(hour, hour - 11, f1, f1);
	}
	else if (hour < 11 && hour >= 0)
	{
		f1 = flag(1);
		print_hours(hour, hour + 1, f1, f1);
	}
	else
	{
		f1 = flag(1);
		f2 = flag(0);
		print_hours(hour, hour + 1, f1, f2);
	}
}

void	ft_takes_place(int hour)
{
	char	*f1;

	if (hour > 12 && hour < 23)
	{
		f1 = flag(0);
		print_hours(hour - 12, hour - 11, f1, f1);
	}
	else
		ft_idk(hour);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_takes_place(atoi(argv[1]));
	return (0);
}
