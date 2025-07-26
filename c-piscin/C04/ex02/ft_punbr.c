#include <unistd.h>

void	ft_putnbr(int nb)
{
	char *nbr = "0123456789";
	char	rest[10];
	int	i;
	int	j;	

	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
			nb = -nb;
	}

	i = 0;
	while (nb > 0)
	{
		rest[i] =nbr[nb % 10];
		nb = nb / 10;
		i++;	
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &rest[j], 1);
		j--;
	}
}
