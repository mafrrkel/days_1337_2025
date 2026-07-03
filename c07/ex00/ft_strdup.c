#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*ptr;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char name[8] = "mohamde";
	char *p;

	p = ft_strdup(name);
	while(*p != '\0')
	{
		write(1, p,1);
		p++;
	}
	return (0);
}
