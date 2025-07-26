char	*ft_strcpy(char *dest, char *src)
{
	int	i ;

	i = 0;
	while (1)
	{
		if (src[i] == '\0')
		{
			dest[i] = src[i];
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
