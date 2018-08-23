#include "hexdump.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	  return (0);
	print_all(av[1]);
	return (0);
}
