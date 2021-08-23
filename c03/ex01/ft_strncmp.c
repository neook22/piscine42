/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:15:33 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/08/15 17:20:02 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n != 0 && *s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		++s1;
		++s2;
		--n;
	}
	if (n != 0)
	{
		return (*s1 - *s2);
	}
	return (0);
}
