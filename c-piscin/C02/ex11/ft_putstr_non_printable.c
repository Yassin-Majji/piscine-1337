void	ft_print_non_printable(unsigned char non_printable)
{
	char	*hex="0123456789abcdef";

	write(1, &hex[non_printable / 16], 1);
	write(1, &hex[non_printable % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if(str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			ft_print_non_printable((unsigned char)str[i]);
		}
		i++;
	}
}
