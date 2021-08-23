#include <unistd.h>
#include <stdio.h>

int	ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

void	ft_rotone(char	*str)
{
	int		i;
	char	tempChar;

	i = 0;
	while (str[i])
	{
		if (ft_is_alpha(str[i]))
		{
			if (str[i] == 'z')
				write(1, "a", 1);
			else if (str[i] == 'Z')
				write(1, "A", 1);
			else
			{
				tempChar = str[i];
				tempChar += 1;
			}
			write(1, &tempChar, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 2 || argv[1] == NULL)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_rotone(argv[1]);
	return (0);
}