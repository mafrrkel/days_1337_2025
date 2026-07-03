#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	deff;
	int	*ptr;

	deff = max - min;
	i = 0;
	if(deff <= 0 )
		return (NULL);
	ptr = malloc(deff * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while ( i <= deff)
	{
		ptr[i] = (min + i);
		i++;
	}
	return (ptr);
	
}
