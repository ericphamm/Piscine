#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int main()
{
	char s1[] = "This";
	char s2[] = "his";
	printf("my: %s \n", ft_strstr(s1, s2));
	printf("standard c function: %s ", strstr(s1, s2));
}