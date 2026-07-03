#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strslen(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i <size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
	{
		len ++;
	}
	return (len);
}
char	*ft_strscpy(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i <size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		i++;
		if (i >= size)
		{
			str[k] = '\0';
			return (str);
		}
		j = 0;
		while (sep[j] != '\0')
		{
			str[k] = sep[j];
			j++;
			k++;
		}
	}
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	len;
	char	*ptr;
	
	if (size <= 0)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	len = ft_strslen(size,strs) + ft_strlen(sep)*(size - 1) + 1;
	ptr = malloc(sizeof(char) *len);
	if (ptr == NULL)
		return (NULL);
	return (ft_strscpy(size, strs, sep, ptr));

	
}
