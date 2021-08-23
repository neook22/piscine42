#include <stdio.h>

int	ft_is_prime(int nb)
{
	int other_numbers;
	if (nb == 0 || nb == 1)
		return (0);
	other_numbers = 2;
	while (other_numbers < nb)
	{
		if (nb % other_numbers == 0)
		{
			if (other_numbers != nb)
				return (0);
		}
		other_numbers ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	nextPrime;
	if (ft_is_prime(nb))
		return (nb);
	nextPrime = nb;
	while (!ft_is_prime(nextPrime))
		nextPrime++;
	return (nextPrime);
}

int main(void)
{
	printf("%d", ft_find_next_prime(5));
}

