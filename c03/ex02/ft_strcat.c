int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
