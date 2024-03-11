/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:53:31 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/23 23:53:31 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display all digits in ascending order
void    ft_print_numbers(void)
{
    int i;

    i = 48;
    while (i <= 57)
    {
        write(1, &i, 1);
        i++;
    }  
}
