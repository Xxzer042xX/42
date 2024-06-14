/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 05:26:38 by mdelmeni          #+#    #+#             */
/*   Updated: 2023/11/28 05:26:38 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display all different combinations of three digits in ascending order
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	//display first digit
	while (a <= '7')
	{
		b = a + 1;
		//display second digit
		while (b <= '8')
		{
			c = b + 1;
			//display third digit
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != '7')
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
