
#include <unistd.h>
#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main()
{
	int x;
	int y;
	
	x = 10;
	y = 4;

	printf("this is the input:\n" "%d\n%d\n", x, y);

	ft_ultimate_div_mod(&x, &y);
	printf("this is the output:\n" "%d\n%d\n", x, y);

}
