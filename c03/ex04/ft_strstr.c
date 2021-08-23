/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:16:54 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/08/15 12:16:55 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char	*str, char	*to_find)
{	
	int	i;
	int	j;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j])
	{
		i = 0;
		while (str[j + i] == to_find[i])
		{
			if (to_find[i] == str[j + i] && to_find[i + 1] == '\0')
				return (&str[j]);
			i++;
		}
		j++;
	}
	return (0);
}
