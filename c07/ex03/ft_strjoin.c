#include <stdlib.h>

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	char	*joiner;
	int		i;
	int		j;
	int		k;
	int		l;

	joiner = "";
	if (size == 0)
		return (joiner);
	joiner = malloc(size * sizeof(char));
	if (joiner == 0)
		return (0);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			joiner[k++] = strs[i][j++];
		l = 0;
		while (sep[l] != '\0' && i < size - 1)
			joiner[k++] = sep[l++];
		i++;
	}
	return (joiner);
}

#include <stdio.h>

int	main()
{
	char	*joiner;

	char	a[] = "test";
	char	b[] = "test2";
	char	c[] = "test3";

	char	*strs[3];

	strs[0] = a;
	strs[1] = b;
	strs[2] = c;

	joiner = ft_strjoin(3, strs, " AHAHA ");

	printf("%s", joiner);

	free(joiner);
}
