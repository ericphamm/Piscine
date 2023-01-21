
#include <unistd.h>
#include <stdio.h>
#include "ft_div_mod.c"

int	main()
{
	int a;
	int b;
	int c;
	int d;

	a = 10;
	b = 4;
	c = 0;
	d = 0;

	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
	
	ft_div_mod(a, b, &c, &d);

	printf("%d\n%d\n%d\n%d", a, b, c, d);

}