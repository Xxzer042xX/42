/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:28:42 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 19:28:42 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(void)
{
    int i;
    int *ft;

    i = 0;
    ft = &i;

    ft_putnbr(i);
    ft_putchar('\n');
    ft_ft(ft);
    ft_putnbr(i);
    ft_putchar('\n');
    return (0);
}
