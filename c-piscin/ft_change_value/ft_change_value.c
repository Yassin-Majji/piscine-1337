#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	set_to_5(int **a)
{
	**a = 5;
}

int main()
{
int x = 8;
int *b = &x; 
ft_putnbr(x);
set_to_5(&b);
write(1, "\n", 1);
ft_putnbr(x);
}

