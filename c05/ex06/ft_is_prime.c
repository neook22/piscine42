#include <stdio.h>

int	ft_is_prime(int nb)
{
	int other_numbers;

	if (nb == 0 || nb == 1)
		return (0);
	other_numbers = 2;
	if (nb < 0)
		nb = nb * -1;
	while (other_numbers < nb)
	{
		if (nb % other_numbers == 0)
		{
			if (other_numbers != nb)
				return (0);
			other_numbers++;
		}
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(-50));
}

