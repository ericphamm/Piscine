#include <unistd.h>
#include <stdio.h>
#include "ft_swap.c"

int main()
{
	int	a;
	int	b;
	int* pa;
	int* pb;
	
	pa = &a;
	pb = &b;	
	a = 0;
	b = 1;
	printf("%d\n%d\n", a, b);

	ft_swap(pa, pb);

	printf("%d\n%d", a, b);

}
