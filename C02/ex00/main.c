#include <unistd.h>
#include <stdio.h>
#include "ft_strcpy.c"

int main()
{
	char source[] = "This is a new string";
	char destination[] = "Test string";
	printf("%s", ft_strcpy(destination, source));
}