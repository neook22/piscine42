/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:47:38 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/08/22 10:47:40 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		diff = s1[i] - s2[i];
		return (diff);
	}
	else
		return (0);
}

void	ft_sort_params(char **str, int size)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		if ((i + 1 < size) && (ft_strcmp(str[i], str[i + 1]) > 0))
		{
			tmp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &"\n", 1);
}

int	main(int argc, char	**argv)
{
	int	i;

	i = 1;
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
