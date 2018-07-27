/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 21:18:52 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 21:20:29 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				sum;

	i = 0;
	sum = s1[0] - s2[0];
	if (n < 1)
		return (0);
	while (s1[i] == s2[i])
	{
		while (i <= n)
		{
			if (s1[i] != s2[i] && i <= n)
				sum += s1[i] - s2[i];
			i++;
		}
		i++;
	}
	return (sum);
}
