/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:22:51 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 19:27:58 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft.h"
#include <stdio.h>

char	**ft_return_tab(int i, int j)
{
  int ret;
  char buff[BUFF_SIZE + 1];
  char **tab;
  char *tab_out;

  while ((ret = read(0, buff, BUFF_SIZE)))
    {
      buff[ret] = '\0';
      tab_out = ft_strcat(tab_out, buff);
    }
  tab = whitespaces(tab_out);
  return (tab);
}

int	main(int ac, char **av)
{
  int i;
  int j;
  int fd;
  char **tab;

  i = 0;
  j = 0;
  fd = 0;
  if (ac == 1)
      tab = ft_return_tab(i, j);
  else if (ac > 1)
    {
      i = 0;
      while (av[i])
	{
	  fd = open(av[i] , O_RDONLY);
	  tab = ft_get_next_line(fd);
	  close();
	}
    }
  return (0);
}
