
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*table;

	if (min >= max)
		return (**range = 0);
	i = 0;
	table = (int *)malloc(sizeof(*table) * (max - min));
	while (min + i < max)
	{
		table[i] = min + 1;
		i++;
		range++;
	}
	table[i] = '\0';
	free(table);
	return (range);
}
