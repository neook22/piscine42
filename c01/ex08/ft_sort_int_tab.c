/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjeuneje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:05:58 by sjeuneje          #+#    #+#             */
/*   Updated: 2021/08/08 15:05:59 by sjeuneje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int tab[8]; // = {10, 100, 140, 5, 4, 3, 50, 90};
	tab[0] = 10;
	tab[1] = 100;
	tab[2] = 140;
	tab[3] = 5;
	tab[4] = 4;
	tab[5] = 3;
	tab[6] = 50;
	tab[7] = 90;

	ft_sort_int_tab(tab, 8);
	for(int i = 0; i <= 7; i++)
		printf("%d ", tab[i]);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (i + 1 < size && tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
