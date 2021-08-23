#include <stdio.h>

int	strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' &&  s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		diff = s1[i] - s2[i];
		return (diff);
	else
		return (0);
}

