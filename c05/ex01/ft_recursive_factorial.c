#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return 1;
	return (nb * ft_recursive_factorial(nb - 1));
}
int	main(void)
{
	int n;
	int result;

	n = 5;
	result = ft_recursive_factorial(n);
	printf("%d",result);
	return 0;
}

