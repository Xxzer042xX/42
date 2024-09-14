/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:40:25 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/17 01:40:25 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the nbr at the index of the Fibonacci sequence
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(4));
	return (0);
}
*/