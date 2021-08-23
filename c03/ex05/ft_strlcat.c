/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:17:08 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/08/15 12:17:11 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	sizeOf(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	findEndIndex(char *str)
{
	unsigned int	endIndex;

	endIndex = 0;
	while (*str)
	{
		endIndex++;
		str++;
	}
	return (endIndex);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	endIndex;

	i = 0;
	endIndex = findEndIndex(dest);
	while (i < size - 1)
		dest[endIndex++] = src[i++];
	dest[endIndex] = '\0';
	return (size + sizeOf(dest));
}
