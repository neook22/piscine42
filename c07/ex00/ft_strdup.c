#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[i++])
		len++;
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
