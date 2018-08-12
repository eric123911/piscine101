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
void	ft_putstr(char *str);
int	ft_char_is_printable(char c);
char	*atohex(int nb);

// Print functions declaration
void	print_rcol(char *fname);

#endif
