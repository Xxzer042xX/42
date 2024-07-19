/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:32:52 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/09 13:32:52 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares two strings and returns the difference between the first two different characters
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
