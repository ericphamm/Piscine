#include <stdio.h>
#include <string.h>
#include "ft_atoi.c"

int main()
{

	char attoi[] = " ----+--+1234ab567";
	printf("\nft_attoi: %d", ft_atoi(attoi));
}