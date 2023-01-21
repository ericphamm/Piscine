#include <stdio.h>
#include <string.h>
#include "ft_str_is_numeric.c"

int main()
{
	printf("%d\n", ft_str_is_numeric("ababab"));
	printf("%d\n", ft_str_is_numeric("121211"));
	printf("%d\n", ft_str_is_numeric("a1a1a1a"));
	printf("%d\n", ft_str_is_numeric("1/1/1*-24"));
	printf("%d\n", ft_str_is_numeric("         "));
	printf("%d\n", ft_str_is_numeric("a"));
	printf("%d\n", ft_str_is_numeric("ab"));
	
}