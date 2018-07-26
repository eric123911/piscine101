/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/26 14:11:26 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 18:13:21 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str)
    {
      i++;
      str++;
    }
  return (i);
}

int	check_errors(char c)
{
  int	res;

  if (c >= '0' && c <= '9')
    res = c -'0';
  else if (c >= 'a' && c <= 'z')
    res = c - 'a' + 10;
  else if (c >= 'A' && c <= 'Z')
    res = c - 'A' + 10;
  else
    res = -1;
  return (res);
}

int	ft_atoi(char *str)
{
  int	s;
  int	nb;

  nb = 0;
  while (*str < 33)
    str++;
  s = (*str == '-' ? 1 : 0);
  if (*str == '-' || *str == '+')
    str++;
  while (*str >= '0' && *str <= '9')
    nb = nb * 10 + *str - '0', str++;
  return (s ? -nb : nb);
}

int	ft_atoi_base(char *str, char *base)
{
  int	c;
  int	i;
  int	s;
  int	nb;
  int	ibase;

  i = 0;
  nb = 0;
  ibase = ft_atoi(base);
  while (*str < 33)
    str++;
  s = (*str == '-' ? 1 : 0);
  if (*str == '-' || *str == '+')
    str++;
  c = check_errors(str[i]);
  while (str[i] >= '0' && check_errors(str[i]) <= ft_atoi(base))
    {
      nb = nb * ft_strlen(base) + c;
      i++;
      c = check_errors(str[i]);
    }
  return (s == '-' ? -nb : nb);
}


int	main(int ac, char **av)
{
  if (ac != 3)
    return (0);
  printf("%i\n", ft_atoi_base(av[1], av[2]));
  // TEST
  //printf("%i\n", check_errors(av[1][0]));
  return (0);
}
