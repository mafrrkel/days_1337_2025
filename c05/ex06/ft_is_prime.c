#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);

	while (i <= nb/i)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return (1);
}
int	main(void)
{
	int res;
	res = ft_is_prime(234);
	printf("%d",res);
	return 0;
}
