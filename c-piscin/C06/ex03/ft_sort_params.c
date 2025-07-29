#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	char	*temp;
	
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while(j < argc)
		{
			k = 0;
			while (argv[i][k] ==  argv[j][k])
			{
				k++;
			}
			if (argv[j][k] < argv[i][k])
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
