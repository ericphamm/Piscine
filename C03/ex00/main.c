#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"


int main()
{
	char str1[] = "Sparta";
	char str2[]	= "Spa";
	printf("%d", ft_strcmp(str1, str2));
}
