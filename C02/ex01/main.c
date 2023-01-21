#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int main()
{
	char source[] = "this this a new string";
	char destination[] = "aaaaaaa";
	printf("%s", ft_strncpy(destination, source, 5));
}