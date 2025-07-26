char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	i = 0;
	while (i < n)
	{
		if (i > j -1)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
