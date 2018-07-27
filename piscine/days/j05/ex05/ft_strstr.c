/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 12:43:09 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 17:58:25 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (str[0] != '\0')
	{
		i = 0;
		while (to_find[i] != '\0')
		{
			if (str[i] != to_find[i])
				return (ft_strstr(str + 1, to_find));
			i++;
		}
		return (str);
	}
	else
		return (0);
}
