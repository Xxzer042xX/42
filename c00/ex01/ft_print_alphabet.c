/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:33:07 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 23:33:07 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display the alphabet in lowercase from a to z
void	ft_print_alphabet(void)
{
	char	letter;

	letter = '`';
	while (++letter <= 'z')
		write(1, &letter, 1);
}

/*
int main(void)
{
    ft_print_alphabet();
	write (1, "\n", 1);
    return (0);
}
*/