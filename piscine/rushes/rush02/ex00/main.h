/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: eschnell <eschnell@student.le-101.>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/22 02:19:23 by eschnell     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 18:58:35 by wsayad      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	print00(int x, int y, int i);
void	print01(int x, int y, int i);
void	print02(int x, int y, int i);
void	print03(int x, int y, int i);
void	print04(int x, int y, int i);
void	erreur0(char *str, int x, int y, int i);
void	erreur1(char *str, int x, int y, int i);
void	erreur2(char *str, int x, int y, int i);
void	erreur3(char *str, int x, int y, int i);
void	erreur4(char *str, int x, int y, int i);

#endif
