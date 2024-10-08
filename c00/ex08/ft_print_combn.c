/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 23:47:14 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/07/24 23:47:14 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to write a combination and the separator
void	write_comb(char *str, int n, int is_last)
{
	write (1, str, n);
	if (!is_last)
		write(1, ", ", 2);
}

// Function to check if the current combination is the last one(bool)
int	is_last_comb(char *str, int n)
{
	return (str[0] == ('9' - n) + 1);
}

// Function to print all possible combinations of n digits in ascending order.
void	ft_print_combn(int n)
{
	char	str[10];
	int		pos;
	int		nbr;

	str[n] = '\0';
	pos = 0;
	nbr = '0';
	while (1)
	{
		if (pos == n)
		{
			write_comb(str, n, is_last_comb(str, n));
			pos--;
		}
		else if (nbr <= '9')
			str[pos++] = nbr++;
		else
		{
			if (pos == 0)
				break ;
			nbr = str[--pos] + 1;
		}
	}
}
/*
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2 )
		ft_print_combn(atoi(av[1]));
	return (0);
}
*/