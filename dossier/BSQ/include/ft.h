/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 10:48:46 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 22:15:25 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include "../include/libft.h"
# define BUFF_SIZE 10000

char	*ft_get_next_line(int fd);
void	ft_print_sqr(char *tab);
char	**ft_split_backslash_n(char *str, int k);

#endif
