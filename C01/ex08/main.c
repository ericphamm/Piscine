#include <unistd.h>
#include <stdio.h>
#include "ft_sort_int_tab.c"

int	main()
{
	int array[] = {5, 3, 9, 7, 1, 2, 4, 8, 6};
	int sizearray = sizeof(array) / sizeof(array[0]);
	int i = 0;

	ft_sort_int_tab(array, sizearray);
	while (sizearray > i)
	{
		printf("%d", array[i]);
		i++;
	}
}