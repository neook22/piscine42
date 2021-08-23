#include <unistd.h>

void	ft_putchar(char c);

void	ft_conditions(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == 1 && j == y))
	{
		ft_putchar('A');
	}
	else if ((j == 1 && i > 1 && i < x) || (i == x && j > 1 && j < y))
	{
		ft_putchar('B');
	}
	else if ((j == y && i > 1 && i < x) || (i == 1 && j > 1 && j < y))
	{
		ft_putchar('B');
	}
	else if ((i == x && j == 1) || (i == x && j == y))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			ft_conditions(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
