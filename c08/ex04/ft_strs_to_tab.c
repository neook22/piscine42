#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	str = malloc((len) * sizeof(char));
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

int	ft_tot_strlen(char	**str, int ac)
{
	int	i;
	int	j;
	int	cpt;

	i = 0;
	cpt = 0;
	while (i < ac)
	{
		j = 0;
		while (str[i][j])
		{
			cpt++;
			j++;
		}
		cpt++;
		i++;
	}
	cpt++;
	return (cpt);
}

#include <stdio.h>

struct s_stock_str *ft_strs_tab(int	ac, char **av)
{
	int			i;
	int			tot_len;
	t_stock_str *tab;

	tot_len = ft_tot_strlen(av, ac);
	//printf("%d\n", tot_len);
	tab = malloc((tot_len * sizeof(char)) + 1);
	if (tab == NULL)
		exit (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		//printf("%d %p %s\n", tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}



int	main(void)
{
	t_stock_str *tab;
	char	*a;
	char	*b;
	char	*c;
	char	*strs[3];

	a = "salukht";
	b = "ca vah";
	c = "okhb";

	strs[0] = a;
	strs[1] = b;
	strs[2] = c;

	tab = ft_strs_tab(3, strs);
	free(tab);
}