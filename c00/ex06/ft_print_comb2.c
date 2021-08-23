/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:38:41 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/08/07 18:38:52 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b)
{
	int	a0;
	int	a1;
	int	b0;
	int	b1;

	a0 = a / 10 + 48;
	a1 = a % 10 + 48;
	b0 = b / 10 + 48;
	b1 = b % 10 + 48;
	write(1, &a0, 1);
	write(1, &a1, 1);
	write(1, " ", 1);
	write(1, &b0, 1);
	write(1, &b1, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		while (b < 100)
		{
			print(a, b);
			write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
	print(98, 99);
}
