/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isekhwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:37:57 by isekhwel          #+#    #+#             */
/*   Updated: 2017/11/28 16:38:44 by isekhwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
    dest[counter] = '\0';
	return (dest);
}

int main (void)
{
    char dest[100];
    char src[] = "Hello World";
    
    printf("%s",ft_strcpy(dest, src));
    return(0);
}
