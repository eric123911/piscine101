#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# define BUF_SIZE 1

// Utils functions declaration
int	ft_strlen(char *str);
void	ft_putstr(char *str);
int	ft_char_is_printable(char c);
char	*atohex(int nb);

// Print functions declaration
//void	
void	print_mcol(char c);
void	print_rcol_pad(int i);
void	print_rcol(int i);
void	print_all(char *filename);

#endif
