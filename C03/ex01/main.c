#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int main()
{
	char str1[] = "123455";
	char str2[] = "12345";

	printf("%d", ft_strncmp(str1, str2, 10));
}