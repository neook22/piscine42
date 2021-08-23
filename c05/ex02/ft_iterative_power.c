#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int coef = nb;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (0);
	while (power > 1)
	{
		nb *= coef;
		power--;
	}
	return (nb);
}

int	main()
{
	printf("%d\n", ft_iterative_power(2, 4));
}