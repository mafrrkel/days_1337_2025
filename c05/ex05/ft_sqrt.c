#include <stdio.h>
int     ft_sqrt(int nb)
{
        int     i;
        i = 1;
	if (nb < 0)
		return 0;
	if (nb == 1)
		return 1;
        while (i <= (nb/i))
        {
                if (i*i == nb)
                        return i;
                i++;
        }
        return 0;
}
int     main(void)
{
        int result;
        result = ft_sqrt(100);
        printf("%d",result);
        return 0;
}             
