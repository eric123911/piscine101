/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 15:37:28 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 15:56:23 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *res;

	i = 0;
	while (tab[i])
		i++;
	res = malloc(sizeof(int) * (i + 1));
	while (*tab)
	{
		res = f(*tab);
		tab++;
	}
	return (res);
}
