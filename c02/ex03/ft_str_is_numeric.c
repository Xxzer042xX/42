/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:31:04 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/07 18:31:04 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if the string contains only numerical characters, and returns 1 if it does, 0 if it doesn't
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}