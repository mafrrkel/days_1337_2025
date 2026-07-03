#include <stdio.h>
#include <unistd.h>
void	ft_putstr_non_printable(char *str)
{
	int Arayy[9];
	int i;
	int c;

	i = 0;
	c = 0;
	while (*(str + i) != '\0')
	{
		
		if (*(str + i) >= 0 && *(str + i) <= 9)
		{
			while ( c < 9)
			{
				if ( c  == *(str + i) )
				{
					*(str + i) = *(str + i) +'0';
					write (1, "\\", 1);
					write (1, (str +i),1);
				}
				c ++;
			}
		}
		else 
			write (1, (str +i), 1);
		i++;
	}

}
int	main()
{
	char st[22] = "Coucou\atu vas bien ?";
	ft_putstr_non_printable(st);
	return 0;
}
