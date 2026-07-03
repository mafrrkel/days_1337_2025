#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int deff;

	deff = max - min;
	*range = malloc(sizeof(int) * deff);
	if (*range == NULL)
		return (-1);
	else if (deff <= 0)
		return (0);
	else 
		return (deff);
}
int	main(void)
{
	int	*ptr1;
	int	**ptr2;

	ptr2 = &ptr1;
	printf("%p\n",ptr1);
	int ret = ft_ultimate_range(ptr2,1,10);
	printf("%d\n",ret);
	printf("%p\n",ptr1);
	return (0);
}
