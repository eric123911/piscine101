/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_next_line.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 19:36:03 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 22:16:49 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/ft.h"

char				*read_line(char *str, int fd)
{
	char			buff[BUFF_SIZE + 1];
	int				ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
	  	buff[ret] = '\0';
		str = ft_strcat(str, buff);
	}
	*str++ = '\0';
	return (str);
}

char				*ft_get_next_line(int fd)
{
	static char		*str;

	str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1));
	if (fd == -1)
		return (NULL);
	str = read_line(str, fd);
	return (str);
}

/*char    *read_line(char *str, int fd)
{
  char  buff[BUFF_SIZE];

  while (read(fd, buff, BUFF_SIZE))
    str = ft_strcat(str, buff);
  *str++ = '\0';
  return (str);
}

char    *ft_get_next_line(int fd)
{
  char             *str;

  str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1));
  if (fd < 0)
    return (NULL);
  str = read_line(str, fd);
  //tab = ft_split_backslash_n(str, 0);
  return (str);
}*/
