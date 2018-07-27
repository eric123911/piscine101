/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   nmatch.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/15 20:37:10 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/15 20:49:37 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	while (*s2 == '*' && *(s2 + 1) == '*')
		s2++;
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	if (*s1 != *s2 && *s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("%i", nmatch(argv[1], argv[2]));
	return (0);
}	
