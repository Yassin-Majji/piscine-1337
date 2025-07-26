#include <unistd.h>

void	ft_reverse_array(char *array, int size)
{
	int	i;
	int	j;
	char	temp;

	write(1, array, size);
	write(1, "\n", 1);
	i = 0;
	j = size - 1;
	while(i < size / 2)
	{
		temp = *(array + i);
		*(array + i) = *(array + j);
		*(array + j) = temp;
		i++;
		j--;
	}
	write(1, array, size);
}
