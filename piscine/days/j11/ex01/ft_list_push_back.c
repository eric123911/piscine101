/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 17:11:51 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:36:20 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_list.h"

t_list		*ft

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	tmp;

	tmp = **begin_list;
	*begin_list = ft_create_elem(data);
	while (tmp)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
	//tmp = NULL;
}



int			main(void)
{
	t_list *list;

	list = NULL;
	ft_list_push_back(&list, "1234");

	while (list->next)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
	return (0);
}
