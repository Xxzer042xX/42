/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:23:28 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/02/24 18:23:28 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is_negative.h"

#include <stdlib.h>

int main(int ac, char **av)
{
    int n;

    n = 0;
    if(ac == 2)
    {
        n = atoi(&av[1][0]);
        ft_is_negative(n);
    }
    return(0);
}
