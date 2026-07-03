#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return 1;
	else if (power < 0)
		return 0;
	else
		return (ft_recursive_power(nb ,(power -1)) * nb);
}
int	main(void)
{
	int result;
	result = ft_recursive_power(3,10);
	printf ("%d", result);
	return 0;
}
