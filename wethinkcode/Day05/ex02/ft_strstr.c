/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isekhwel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 16:59:30 by isekhwel          #+#    #+#             */
/*   Updated: 2017/11/28 18:27:07 by isekhwel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int counter_str;
	int search_the_rest;

	counter_str = 0;
	search_the_rest = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[counter_str] != '\0')
	{
		if (str[counter_str] == to_find[0])
		{
			search_the_rest = 0;
			while (str[counter_str + search_the_rest] != '\0' &&
					to_find[search_the_rest] != '\0')
			{
				if (str[counter_str + search_the_rest] !=
						to_find[search_the_rest])
					break ;
				search_the_rest++;
			}
			return (&str[counter_str]);
		}
		counter_str++;
	}
	return (NULL);
}
