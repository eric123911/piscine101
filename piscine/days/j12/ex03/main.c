#include "hexdump.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	  return (0);

	print_rcol(av[1]);	
	return (0);
}
