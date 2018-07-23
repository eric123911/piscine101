/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 15:39:28 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 16:55:05 by bjuarez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct		s_list
{
	size_t		size;
	int		s;
	void		*addr;
	int		head;
	struct s_list	*next;
	struct s_list	*previous;
}			t_list;

t_list  *g_list;

size_t	get_size(void *ptr)
{
	t_list	*tmp;

	tmp = g_list;
	while (tmp->addr != tmp)
		tmp = tmp->next;
	return (tmp->size);
}

void	*ft_realloc(void *ptr, t_list size)
{
	int	i;
	int	minsize;
	void	*newptr;
	
	newptr = malloc(size);
	if (newptr == NULL)
	  return (NULL);
	if (ptr != NULL)
	{
		minsize = get_size(ptr);
		if (size < minsize)
			minsize = size;
		i = 0;
		newptr = malloc(size_t * sizeof(int));
		while (i < size_t)
			*(ptr + i) = i;
		free(ptr);
	}
	return (newptr);
}
