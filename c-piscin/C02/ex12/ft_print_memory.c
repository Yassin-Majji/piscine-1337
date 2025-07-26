#include <unistd.h>

void	convert_addr_to_hex(unsigned long title)
{
	char	*hex;
	int	i;
	char	devisions[16];	

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		
		devisions[i] = hex[title % 16];
		title /= 16;
		i--;
	}
	write(1, devisions, 16);
	write(1, ": ", 2);
	
}

void	char_to_hex(int	number_of_char, unsigned char *title)
{
	int	i;
	char	*str;

	str = "0123456789abcdef";
	i = 0;
	while (i < number_of_char)
	{
		write(1, &str[title[i] / 16], 1);
		write(1, &str[title[i] % 16], 1);
		if (i % 2 == 1)
			write(1, " ", 1);
		if(i + 1 == number_of_char && i % 2 == 0)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	i = 0;
	while (i < number_of_char)
	{
		if (title[i] >= 32 && title[i] <= 126)
			write(1, &title[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if( size == 0)
	{
		return (addr);
	}
	int	array_length;
	
	if(size <= 16)
		array_length = 1;
	else
		if(size % 16 == 0)
			array_length = size / 16;
		else
			array_length = size / 16 + 1;
	
	int	number_of_lines[array_length];
	int 	i;
	int	operation;
	int	j;
	unsigned char	*title = (unsigned char *) addr;
	unsigned long	hex_addr;

	operation = size;
	i = 0;
	while (i < array_length)
	{
		operation -= 16;
		if (operation >= 0)
			number_of_lines[i] = 16;
		else if (operation < 0)
			number_of_lines[i] = operation + 16;
		i++;
	}
	j = 0;
	while (j < i)
	{	
		convert_addr_to_hex((unsigned long)title);
		char_to_hex(number_of_lines[j], title);
		title = title + number_of_lines[j];
		write(1, "\n", 1);
		j++;	
	}
	return (addr);
}
