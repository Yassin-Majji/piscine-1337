#include <unistd.h>

int	search_about_correct_places(int step, int diagonals[][10], 
	char correct_places[10], int columns[10],int * number_of_combinations)
{
	if (step == 10)
	{
		write(1, correct_places, 10);
		write(1, "\n", 1);
		return *number_of_combinations +=1;
	}
	int	i;
	int	k;
	int	j;

	i = 0;
	while (i < 10)
	{
		if (diagonals[step][i] || columns[i])
		{	i++;
			continue;
		}
		correct_places[step] = i + '0';
		columns[i] = 1;
		k = step + 1;
		j = 1;
		while (k <= 9)
		{
			if (i + j <= 9)
				diagonals[k][i + j] += 1;
			if(i - j >= 0)
				diagonals[k][i - j] += 1;
			j++;
			k++;
		}
		search_about_correct_places(step + 1, diagonals, correct_places, columns, number_of_combinations);
		k = step + 1;
                j = 1;
                while (k <= 9)
                {
                        if (i + j <= 9)
                                diagonals[k][i + j] -= 1;
                        if(i - j >= 0)
                                diagonals[k][i - j] -= 1;
                        j++;
                        k++;
                }
		columns[i] = 0;
		i++;
	}
}

int	ft_ten_queens_puzzle()
{
	int     diagonals[10][10]= {0};
	char    correct_places[10];
	int     columns[10] = {0};
	int	number_of_combinations;
	
	number_of_combinations = 0;
	search_about_correct_places(0, diagonals, correct_places, columns, &number_of_combinations);
	return number_of_combinations;
}
