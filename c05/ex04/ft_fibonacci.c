#include <stdio.h>
int	ft_fibonacci(int indx)
{
	if (indx < 0)
		return -1;
	if (indx == 1 || indx == 0)
	{
		if (indx == 1)
			return 1;
		else
			return 0;
	}

	return(ft_fibonacci(indx - 1) + ft_fibonacci(indx - 2));

}
int	main(void)
{
	int	result;
	result = ft_fibonacci(7);
	printf("%d",result);
	return 0;
}
