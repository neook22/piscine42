#include <stdlib.h>

/*
*	Alloue de la place en memoire et rempli un pointeur avec les valeurs de min
*	(inclu) et max (exclu)
*
*	range: prend une adresse d'un pointeur vers lequel on va faire pointer un pointeur contenant la range
*/
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

// #include <stdio.h>

// int	main()
// {
// 	int *ptr;

// 	ptr = NULL;
	
// 	int	len;
// 	int i;

// 	len = ft_ultimate_range(&ptr, 2, 5);
// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("%d", ptr[i]);
// 		i++;
// 	}
// }