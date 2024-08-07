/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelmeni <eljok87@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 08:56:33 by mdelmeni          #+#    #+#             */
/*   Updated: 2024/03/06 08:56:33 by mdelmeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies the n first characters of src to dest, and returns the value of dest
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*s && n)
	{
		*d++ = *s++;
		n--;
	}
	while (n--)
		*d++ = '\0';
	return (dest);
}
