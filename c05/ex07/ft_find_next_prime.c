#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i  = 2;
	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	while (i <= nb/i)
	{
		if ((nb % i) == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
int	main(void)
{
	int	rest;
	rest = ft_find_next_prime(100);
	printf("%d",rest);
	return 0;
}
