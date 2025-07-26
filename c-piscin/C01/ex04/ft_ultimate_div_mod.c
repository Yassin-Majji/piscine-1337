void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}
