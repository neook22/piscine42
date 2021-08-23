#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	x = 0;
	while (x < nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(9));
}
