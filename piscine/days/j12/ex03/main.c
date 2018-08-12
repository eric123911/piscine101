#include "hexdump.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	  return (0);

	// Hexdump Test
	print_all(av[1]);

	// atohex Test
	//printf("%s", atohex(av[1][0]));
	
	return (0);
}
