/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:13:02 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 19:13:02 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void    ft_print_combn(int n);

int main(int ac, char **av)
{
    int numbers;

    if (ac == 2)
    {
        numbers = av[1][0] - 48;
        ft_print_combn(numbers);
    }
    return(0);    
}