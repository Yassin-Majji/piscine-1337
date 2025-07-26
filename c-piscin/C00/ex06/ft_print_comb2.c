/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassin <yassin@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:30:00 by yassin            #+#    #+#             */
/*   Updated: 2025/06/27 17:30:00 by yassin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void   ft_print_char(char c)
{
	write(1, &c, 1);
}

void   ft_print_comb2(void)
{
	int i;
	int j;
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{	
			ft_print_char(i / 10 + '0');
			ft_print_char(i % 10 + '0');
			ft_print_char(' ');
			ft_print_char(j / 10 + '0');
			ft_print_char(j % 10 + '0');
			j++;
				if (i != 98)
				{
					write(1, ", ", 2);
				}
		}
		i++;
	}	
}
