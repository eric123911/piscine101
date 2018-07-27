/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 11:15:20 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 12:29:46 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 09:17:05 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 11:14:54 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

unsigned int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	//while (dest[i])
	//	i++;

	i = ft_strlen(src);
	size = size - i;
	while (dest[j])
	{
		if (j < size)
		{
			src[i + j] = dest[j];
			//size--;
		}
		j++;
	}
	src[i + j] = '\0';
	return (ft_strlen(src) - 1);
}

int					main(void)
{
	char			s1[] = "abc, ";
	char			s2[] = "def";
	unsigned int	s = 1;	

	printf("%u", ft_strlcat(s1, s2, s));
}
