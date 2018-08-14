#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# define BUF_SIZE 1

// Str manip.
void	ft_putchar(char c);
int	ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_strrev(char *str);

// Utils functions declaration
int	ft_char_is_printable(char c);
int	hexlen(int nb);
void	itoh(int nb);

// Print functions declaration
void	print_lcol(int i);
void	print_rcol_pad(int i);
void	print_rcol(int i);
void	print_all(char *filename);

#endif
