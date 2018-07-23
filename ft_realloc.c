/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:39:28 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 19:26:57 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_realloc(int *ptr)
{
  int	i;
  void	*newptr;

  for (i=0; ptr == NULL; ptr++, i++);
  newptr = (void*)malloc(sizeof(int) * i);
  free(ptr);
  return (newptr);
}
