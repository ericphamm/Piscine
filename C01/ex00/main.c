#include <stdio.h>
#include <unistd.h>
#include "ft_ft.c"

int main()
{
	int anynumber;
	int *ptr_anynumber;

	anynumber = 14;
	ptr_anynumber = &anynumber;

	ft_ft(ptr_anynumber);

	printf("%d", anynumber);
	
	return(0);
}