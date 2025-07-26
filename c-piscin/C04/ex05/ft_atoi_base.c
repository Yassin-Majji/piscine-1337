int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		signe;
	int		len_base;
	long	result;

	len_base = 0;
	while (base[len_base])
		len_base++;
	if (len_base < 2)
		return (0);
	i = 0;
	while (i < len_base - 1)
	{
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-' || 
				base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	result = 0;
	while (str[i])
	{
		j = 0;
		while (j < len_base && base[j] != str[i])
			j++;
		if (j == len_base)
			break ;
		result = result * len_base + j;
		i++;
	}
	return (result * signe);
}

