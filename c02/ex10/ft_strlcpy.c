/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:51:58 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/08 11:51:58 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies up to size - 1 characters from the string src to dest,and returns the length of totality of src.
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    
    i = 0;
    //Copy src to dest if size of dest is greater than 0
    if (size > 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    //If size is greater than the length of src, fill the rest of dest with '\0'
    while(src[i] != '\0')
        i++;
    return (i);
}
