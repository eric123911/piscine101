/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_get_next_line.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 19:36:03 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 19:36:24 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_get_next_line.h"

int	error_c(int fd, char **str, char **line)
{
	fd (fd == -1 || line == NULL)
		return (-1);
	if (!*str)
	{
		if (!(*str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
	}
	return (0);
}

char	*read_line(char *str, int fd)
{
	char buff[BUFF_SIZE + 1];
	int ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strcat(str, buff);
	}
	return (str);
}

char	**ft_get_next_line(int fd)
{
	static char *str;
	char **tab;

	if (error_c(fd, &str, line) == -1)
		return (-1);
	str = read_line(str, fd);
	tab = whitespaces(str);
}
