#include <stdio.h>
#include <string.h>
#include "ft_strlowcase.c"

int main()
{
	char lower[] = "TestingThisLovelyFunction";
	printf("%s", ft_strlowcase(lower));
}