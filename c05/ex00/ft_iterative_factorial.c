#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return 0;
	else if (nb == 1 || nb == 0)
		return 1;
	else 
	{
		int result;
		result = 1;
		while (nb != 0)
		{
			result = result * nb;
			nb--;
		}
		return result;
	}

}
int	main(void)
{
	int n = 30;
	int res;
	res =	ft_iterative_factorial(n);
	printf ("%d", res);
	return (0);
}
