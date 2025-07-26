#include <unistd.h>

void	ft_print_combn(int n)
{
	char blend[n];
	char last_blend[n];
        int i;
	i = 0;
	while (i < n)
	{
		blend[i] = i + '0';
                i++;
	}
        i = n - 1;
	int k = 9;
	while (i >= 0)
	{
		last_blend[i] = k + '0';
		i--;
		k--;
	}
	while (blend[0] != last_blend[0])
	{
		k = 0;
		while (k < n)
		{
			write(1, &blend[k], 1);
			k++;
		}
		write(1, ", ", 2);
		k = n - 1;
		while (k >= 0)
		{
			if (blend[k] < '9' - (n - 1 - k))
			{
				blend[k]++;
				int j = k + 1;
				while (j < n)
				{
					blend[j] = blend[j - 1] + 1;
					j++;
				}
				break;
			}
			k--;
		}
	}
	i = 0;
	while (i < n)
	{
		write(1, &blend[i], 1);
		i++;
	}
}
