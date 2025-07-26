#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		i;
	int		j;
	char	symbols[33];
	long	nb;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return ;
	i = 0;
	while (i < base_len - 1)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j] || base[i] == '-' || base[i] == '+')
				return ;
			j++;
		}
		i++;
	}
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		symbols[i] = base[nb % base_len];
		nb /= base_len;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &symbols[i], 1);
		i--;
	}
}

