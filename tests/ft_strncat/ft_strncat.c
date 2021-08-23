#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;
	
	i = 0;
 	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[32] = "test";
	
	printf("%s\n", dest);
	printf("%s", ft_strncat(dest, " coucou", 4));
}

