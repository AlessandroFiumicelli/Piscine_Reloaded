#include <stdlib.h>


int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	average;

	average = max - min;
	if (min >= max)
		return (NULL);
	i = 0;
	if (!(range = (int *)malloc(sizeof(int) * avarege)))
		return (NULL);
	while (i < average)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
