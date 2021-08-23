#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (*tab == 0)
		return (-1);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}

// int	main(void)
// {
// 	int	*tab = ft_range(2, 10);

// 	int i = 0;
// 	while (i < 8)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// }
