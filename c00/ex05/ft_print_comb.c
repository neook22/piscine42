/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:46:47 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/08/05 10:46:55 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		c;
	int		d;
	int		u;

	c = 48;
	while (c < 58)
	{
		d = c + 1;
		while (d < 58)
		{			
			u = d + 1;
			while (u < 58)
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (!(c == '7'))
					write(1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}

int	main(void)
{
	ft_print_comb();
}