/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:22:51 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 19:45:18 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft.h"

/*char		**ft_return_tab(void)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];
	char	**tab;
	char	*tab_out;

	while ((ret = read(0, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		tab_out = ft_strcat(tab_out, buff);
	}
	ft_putstr(tab_out);
	tab = ft_split_backslash_n(tab_out, 0);
	return (tab);
}*/

int			main(int ac, char **av)
{
	int		i;
	int		fd;
	char	*tab;

	i = 0;
	fd = 0;
	/*if (ac == 1)
	{
		tab = ft_return_tab();
		ft_print_sqr(tab);
		return (0);
	}
	else */if (ac > 1)
	{
		i = 1;
		while (av[i])
		{
			fd = open(av[i], O_RDONLY);
			tab = ft_get_next_line(fd);
			close(fd);
			ft_print_sqr(tab);
			i++;
			}
	}
	return (0);
}
