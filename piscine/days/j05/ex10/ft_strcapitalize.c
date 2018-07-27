/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 19:18:56 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 21:53:54 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char		*ft_capitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123 && i == 0)
			str[i] = str[i] - 32;
		else if (i != 0 && (str[i - 1] == ' ' || str[i - 1] == '+'))
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
