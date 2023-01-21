#include <stdio.h>
#include <unistd.h>
#include "ft_rev_int_tab.c"

int main()
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7};
	int sizearray = sizeof(array) / sizeof(array[0]);
	int i = 0;

	ft_rev_int_tab(array, sizearray);

	while(sizearray > i)
	{
	printf("%d", array[i]);
	i++;
}
}
