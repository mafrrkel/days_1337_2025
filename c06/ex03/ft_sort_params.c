#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s1[i] != '\0'&&s1[i] == s2[i])
			i++;
	return (s1[i] - s2[i]);
}
void	ft_printarg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write (1, &argv[i][j] , 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return ;
}

int	main(int argc,char **argv)
{
	int	i;
	int	j;
	int	ret;
	char	*swap;
	
	j = 1;
	if (argc <= 1)
		return (0);
	while (j < argc)
	{
		i = 1;
		while (i < argc)
		{
			ret = ft_strcmp(*(argv +j),*(argv + i));
			if (ret < 0)
			{
				swap = *(argv +j);
				*(argv +j) = *(argv + i);
				*(argv +i) = swap;
			}
			i++;
		}
		j++;
	}
	ft_printarg(argc, argv);
	return 0;
}
