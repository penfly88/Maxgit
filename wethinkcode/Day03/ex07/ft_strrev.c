/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isekhwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 02:18:41 by isekhwel          #+#    #+#             */
/*   Updated: 2017/11/24 04:13:53 by isekhwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strrev(char *str)
{
	char *new_str;
	int size;
	int count;
	int start_point;
	int end_point;

	size = ft_strlen(str);
	start_point = 0;
	end_point = size - 1;
	count = start_point;
	while(count < end_point)
	{
		new_str[count] = str[count];
		str[count] = str[end_point];
		str[end_point] = new_str[count];
		end_point--;
	}
	return str;
}

int main()
{
	char *me = "abcd";
	ft_strrev(me);
	printf("%s\n",me);
	return 0;
}
