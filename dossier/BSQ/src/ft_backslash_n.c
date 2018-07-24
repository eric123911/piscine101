/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_backslash_n.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 09:45:26 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 17:14:09 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft.h"

int			ft_size(char *str, int i)
{
	while (str[i] == '\n')
		str++;
	if (str[i] != '\n' && str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
	}
	return (i);
}

int			ft_count(char *str)
{
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] == '\n')
			i++;
		if (str[i] != '\n' && str[i])
		{
			while (str[i] != '\n' && str[i])
				i++;
			word_count++;
		}
	}
	return (word_count);
}

char		**ft_split_backslash_n(char *str, int k)
{
	int		i;
	int		index2;
	int		nbr_word;
	char	**tab;
	char	*tab_word;

	i = 0;
	index2 = 0;
	nbr_word = ft_count(str);
	tab = (char**)malloc(sizeof(char*) * (nbr_word + 1));
	while (index2 < nbr_word)
	{
		tab_word = (char*)malloc(sizeof(char) * (ft_size(str, k) + 2));
		while (str[k] == '\n')
			k++;
		while (str[k] != '\n')
			tab_word[i++] = str[k++];
		tab_word[i++] = str[k++];
		tab_word[i++] = '\0';
		tab[index2++] = tab_word;
		i = 0;
	}
	tab[index2] = 0;
	return (tab);
}
