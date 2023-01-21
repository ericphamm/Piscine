#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

int main()
{
	char dest_string[] = "hello";
	char src_string[] = "test string";
	printf("%d %s %s", ft_strlcpy(dest_string, src_string, 5), src_string, dest_string);
}