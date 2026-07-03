#include<stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return 0;
	else if (power == 0)
		return 1;
	else 
	{
		while (i < power)
		{
			res = res* nb;
			i ++;
		}
		return res;
	}
}

int	main(void)
{
	int n;
	int result;

	n = 3;
	result = ft_iterative_power(n,10);
	printf ("%d",result);
	return 0;
}
