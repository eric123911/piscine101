/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 14:48:43 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 16:49:51 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int			main(int argc, char **argv)
{
	int		i;
	int		tampon;
	char	*temp;

	tampon = 1;
	/*
	while (tampon)
	{
		i = 0;
		tampon = 1;
		*/
	i = 0;
		while (i++ < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				//tampon = 1;
				temp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = temp;
				tampon = 1;
			}
		}
		/*
	}
	*/
	i = 0;
	while (i++ < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		//i++;
	}
	return (0);
}
