#include <stdio.h>

int	getTheEndIndex(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}


char	*ft_strcat(char	*s1, char *s2)
{
	int	i;
	int	endIndex;

	i = 0;
	endIndex = getTheEndIndex(s1);
	while (s2[i])
	{
		s1[endIndex++] = s2[i++];
	}
	s1[endIndex] = '\0';
	return (s1);
}

