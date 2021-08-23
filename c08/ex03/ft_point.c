#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>

int main(void)
{
	t_point point;

	//printf("%d\n", point.x);
	//printf("%d\n", point.y);

	set_point(&point);

	printf("%d\n", point.x);
	printf("%d", point.y);
	return (0);
}