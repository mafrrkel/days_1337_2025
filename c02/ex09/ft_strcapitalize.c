#include <stdio.h>
#include <unistd.h>
char	*ft_strcaptalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	i = 1;
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if(str[i - 1] != 32 && str[i - 1] != '-' && str[i - 1] != '+' )
				str[i] = str[i] + 32;
		}
		i++;
	}
	return str;
}
int	main()
{
	char	Arayy[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int i;
	char *r;

	i = 0;
	r = ft_strcaptalize(Arayy);
	while (*(r + i) != '\0')
	{
		printf ("%c",*(r + i));
		i++;
	}
}
