#include <unistd.h>
#include <stdio.h>
#include "ft_ultimate_ft.c"

int main()
{
	int	anynumber;
	int*	ptr_anynumber1;
	int**	ptr_anynumber2;
	int***	ptr_anynumber3;
	int****	ptr_anynumber4;
	int*****	ptr_anynumber5;
	int******	ptr_anynumber6;
	int*******	ptr_anynumber7;
	int********	ptr_anynumber8;
	int*********	ptr_anynumber9;

	anynumber = 15;

	ptr_anynumber1 = &anynumber;
	ptr_anynumber2 = &ptr_anynumber1;
	ptr_anynumber3 = &ptr_anynumber2;
	ptr_anynumber4 = &ptr_anynumber3;
	ptr_anynumber5 = &ptr_anynumber4;
	ptr_anynumber6 = &ptr_anynumber5;
	ptr_anynumber7 = &ptr_anynumber6;
	ptr_anynumber8 = &ptr_anynumber7;
	ptr_anynumber9 = &ptr_anynumber8;

	

	ft_ultimate_ft(ptr_anynumber9);
	printf("%d", *********ptr_anynumber9);
}